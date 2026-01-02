FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    libpq-dev \
    libpqxx-dev \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app
COPY . .

RUN rm -rf build && mkdir build && cd build && cmake .. && make -j

# CLI interaktif olduğu için container ayakta kalsın; çalıştırmayı docker exec ile yapacağız
CMD ["bash", "-lc", "sleep infinity"]
