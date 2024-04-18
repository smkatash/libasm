FROM debian:bookworm

RUN apt-get update && \
    apt-get install -y \
        make \
        build-essential \
        gcc \
        nasm \
        gdb

WORKDIR /app
