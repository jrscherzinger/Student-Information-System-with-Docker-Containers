#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <pqxx/pqxx>

class Database {
public:
    Database();
    pqxx::connection& getConnection();

private:
    pqxx::connection conn;
};

#endif
