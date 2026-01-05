# Student Information System

## Project Description
This project is a C++ based Student Information System that performs CRUD
(Create, Read, Update, Delete) operations using a PostgreSQL database.
The application runs as a CLI program and is fully containerized using Docker
and Docker Compose.

## Technologies Used
- C++ (C++11)
- PostgreSQL
- Docker & Docker Compose
- CMake
- libpqxx
- GitHub Actions (CI)

## System Architecture
The system consists of two containers:
- sis-app: C++ application container
- sis-postgres: PostgreSQL database container

Both containers run on the same private Docker network.

## Docker Hub Images
- C++ Application Image: https://hub.docker.com/r/99efe/sis-app
- PostgreSQL Image: postgres:15

## How to Run
See INSTALL.md for installation instructions.

## Usage
See MANUAL.md for application usage.

## Contributors
- Abdullah Kanbur  -    Team Leader, Project Coordination
- Efe Öztürk       -    Docker, Docker Compose
- Taha Can Özdemir -    C++ Development, PostgreSQL




