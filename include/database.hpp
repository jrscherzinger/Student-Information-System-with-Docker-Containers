#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <pqxx/pqxx>
#include <string>
#include <vector>

struct Student {
    int id;
    std::string name;
    std::string surname;
    std::string department;
    std::string email;
};

class Database {
public:
    Database();

    void addStudent(const Student& s);
    std::vector<Student> listStudents();
    void updateStudent(int id, const Student& s);
    void deleteStudent(int id);

    pqxx::connection& getConnection();

private:
    pqxx::connection conn;
};

#endif
