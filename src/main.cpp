#include <iostream>
#include "database.hpp"

int main() {
    try {
        Database db;
        pqxx::work txn(db.getConnection());
        auto r = txn.exec("SELECT 1");
        std::cout << "DB OK: " << r[0][0].as<int>() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
