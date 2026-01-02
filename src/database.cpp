#include "database.hpp"
#include <cstdlib>

Database::Database()
    : conn(
        "host=" + std::string(std::getenv("DB_HOST")) +
        " dbname=" + std::string(std::getenv("DB_NAME")) +
        " user=" + std::string(std::getenv("DB_USER")) +
        " password=" + std::string(std::getenv("DB_PASSWORD"))
      ) {}

pqxx::connection& Database::getConnection() {
    return conn;
}

void Database::addStudent(const Student& s) {
    pqxx::work txn(conn);
    txn.exec_params(
        "INSERT INTO students (name, surname, department, email) VALUES ($1,$2,$3,$4)",
        s.name, s.surname, s.department, s.email
    );
    txn.commit();
}

std::vector<Student> Database::listStudents() {
    pqxx::work txn(conn);
    auto r = txn.exec("SELECT id, name, surname, department, email FROM students");

    std::vector<Student> students;
    for (auto row : r) {
        students.push_back({
            row["id"].as<int>(),
            row["name"].as<std::string>(),
            row["surname"].as<std::string>(),
            row["department"].as<std::string>(),
            row["email"].as<std::string>()
        });
    }
    return students;
}

void Database::updateStudent(int id, const Student& s) {
    pqxx::work txn(conn);
    txn.exec_params(
        "UPDATE students SET name=$1, surname=$2, department=$3, email=$4 WHERE id=$5",
        s.name, s.surname, s.department, s.email, id
    );
    txn.commit();
}

void Database::deleteStudent(int id) {
    pqxx::work txn(conn);
    txn.exec_params("DELETE FROM students WHERE id=$1", id);
    txn.commit();
}
