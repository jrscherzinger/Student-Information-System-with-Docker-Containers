# Student Information System
C++ • PostgreSQL • Docker • Docker Compose • GitHub Actions



## Overview
This project is a Student Information System developed as part of the System Programming course.
The application is implemented in C++, uses PostgreSQL for persistent storage, and is fully containerized using Docker and Docker Compose.
Automated build verification is provided through GitHub Actions (CI).

The core application functionality and database integration are complete and stable.



## Technologies Used
C++
PostgreSQL
libpqxx
Docker	
Docker Compose
CMake
GitHub Actions (CI)



## Project Structure
.
├── src/                # C++ source files
├── include/            # Header files
├── CMakeLists.txt      # CMake build configuration
├── Dockerfile          # Application Docker image
├── docker-compose.yml  # Application + PostgreSQL setup
├── README.md
└── MANUAL.md           # CLI usage documentation



## How to Run the Project (Docker)
Make sure Docker and Docker Compose are installed.

docker compose down -v
docker compose build
docker compose up

After startup:
PostgreSQL runs in a separate container
The application container automatically connects to the database using environment variables
No manual configuration is required



## Application Features (Week 3)
PostgreSQL database connection using libpqxx

Full Student CRUD operations:
Create Student
List Students
Update Student
Delete Student
Proper database transaction handling
Input validation and error handling
Database connectivity verified inside Docker using SELECT 1
Stable multi-container setup with Docker Compose



## Continuous Integration (CI)
This project uses GitHub Actions for continuous integration:
Automatically triggered on pull requests and pushes to the develop branch
Builds the C++ project using CMake
Fails the pipeline if the build fails
A successful CI run is required before merging changes.



## Documentation
MANUAL.md
Detailed command-line usage instructions and examples.
GitHub Wiki
Weekly progress reports
Meeting notes
Decision logs



## Team Members
Abdullah Kanbur – Team Leader, Project Coordination, Reviews, Documentation
Efe Öztürk – Docker, Docker Compose, CI / DevOps
Taha Can Özdemir – C++ Development, PostgreSQL Integration



## Project Status (End of Week 3)
Core C++ functionality completed
Database integration fully operational
Docker-based deployment stable
CI pipeline active and verified
The project is ready to proceed to Week 4, which will focus on final integration testing, documentation refinement, and presentation preparation.



## License
This project is developed for educational purposes as part of a university course. 
