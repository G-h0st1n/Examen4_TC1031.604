#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <unordered_map>
#include <set>
#include <string>
#include <vector>

class UserManager {
private:
    // Mapa para almacenar usuarios y sus intereses
    std::unordered_map<std::string, std::set<std::string>> users;

public:
    // Agregar un nuevo usuario
    void addUser(const std::string& User);

    // Agregar un interés a un usuario
    void addInterest(const std::string& User, const std::string& Interest);

    // Obtener intereses de un usuario
    std::vector<std::string> getInterests(const std::string& User) const;
};

#endif
