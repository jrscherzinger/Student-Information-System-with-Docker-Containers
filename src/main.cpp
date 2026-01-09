#include <iostream>
#include "database.hpp"

int main() {
    Database db;
    int choice;

    while (true) {
        std::cout << "\n1) Add Student\n2) List Students\n3) Update Student\n4) Delete Student\n0) Exit\nChoice: ";
        std::cin >> choice;

        if (choice == 0) break;

        if (choice == 1) {
            Student s;
            std::cout << "Name: "; std::cin >> s.name;
            std::cout << "Surname: "; std::cin >> s.surname;
            std::cout << "Department: "; std::cin >> s.department;
            std::cout << "Email: "; std::cin >> s.email;
            db.addStudent(s);
        }

        if (choice == 2) {
            auto students = db.listStudents();
            for (auto& s : students) {
                std::cout << s.id << " | "
                          << s.name << " " << s.surname
                          << " | " << s.department
                          << " | " << s.email << "\n";
            }
        }

        if (choice == 3) {
            int id;
            Student s;
            std::cout << "ID: "; std::cin >> id;
            std::cout << "New Name: "; std::cin >> s.name;
            std::cout << "New Surname: "; std::cin >> s.surname;
            std::cout << "New Department: "; std::cin >> s.department;
            std::cout << "New Email: "; std::cin >> s.email;
            db.updateStudent(id, s);
        }

        if (choice == 4) {
            int id;
            std::cout << "ID: "; std::cin >> id;
            db.deleteStudent(id);
        }
    }

    return 0;
}
