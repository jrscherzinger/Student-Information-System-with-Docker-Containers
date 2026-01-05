# Installation Guide

This document explains how to install and run the Student Information System
using Docker and Docker Compose.

---

## Requirements

- Ubuntu 20.04 or later
- Docker
- Docker Compose
- Git

---

## Installation Steps

git clone https://github.com/jrscherzinger/Student-Information-System-with-Docker-Containers.git
cd Student-Information-System-with-Docker-Containers

git checkout develop
git pull origin develop

docker compose down -v
docker compose build --no-cache
docker compose up -d

docker exec -it sis-postgres psql -U sis_user -d sis_db

CREATE TABLE students (
    id SERIAL PRIMARY KEY,
    name TEXT,
    surname TEXT,
    department TEXT,
    email TEXT
);

\q

docker ps

Both sis-app and sis-postgres containers should be running.
