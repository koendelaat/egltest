FROM nvidia/opengl:base-ubuntu22.04 AS builder

ENV TZ=Europe/Amsterdam

ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y pkg-config cmake clang libc++-dev libc++abi-dev \
            git zip zlib1g-dev uuid-dev libegl-dev && \
    rm -rf /var/lib/apt/lists/*

RUN update-alternatives --install /usr/bin/cc cc /usr/bin/clang 10 && \
    update-alternatives --install /usr/bin/c++ c++ /usr/bin/clang++ 10 && \
    update-alternatives --set cc /usr/bin/clang && \
    update-alternatives --set c++ /usr/bin/clang++

FROM builder AS build

COPY . /usr/src

RUN cd /usr/src && \
    mkdir /usr/src/out && \
    cmake -DCMAKE_BUILD_TYPE=RelWithDebInfo -S . -B ./out && \
    cmake --build ./out -j `getconf _NPROCESSORS_ONLN`

FROM nvidia/opengl:1.2-glvnd-runtime-ubuntu22.04 AS runtime

ENV TZ=Europe/Amsterdam

ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
            gdb libc++1 openssl ca-certificates && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /opt/app-root

COPY --from=build \
    /usr/src/out/EglTest \
    /opt/app-root/EglTest


CMD ["/opt/app-root/EglTest"]