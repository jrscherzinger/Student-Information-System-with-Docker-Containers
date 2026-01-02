FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    build-essential cmake git \
    libpqxx-dev libpq-dev \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

# copy sources
COPY . .

# build
RUN rm -rf build && mkdir build && cd build && cmake .. && make -j

WORKDIR /app/build

CMD ["./sis"]
