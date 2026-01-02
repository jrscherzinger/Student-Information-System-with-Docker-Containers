#include "database.hpp"
#include <cstdlib>

Database::Database()
    : conn(
        "host=" + std::string(std::getenv("DB_HOST")) +
        " dbname=" + std::string(std::getenv("DB_NAME")) +
        " user=" + std::string(std::getenv("DB_USER")) +
        " password=" + std::string(std::getenv("DB_PASSWORD"))
      )
{}

pqxx::connection& Database::getConnection() {
    return conn;
}
