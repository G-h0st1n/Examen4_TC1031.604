#include "UserManager.h"
#include <iostream>

// Agregar un nuevo usuario
void UserManager::addUser(const std::string& User) {
    if (users.find(User) == users.end()) {
        users[User] = std::set<std::string>();
        std::cout << "Usuario " << User << " agregado.\n";
    } else {
        std::cout << "El usuario " << User << " ya existe.\n";
    }
}

// Agregar un interés a un usuario
void UserManager::addInterest(const std::string& User, const std::string& Interest) {
    if (users.find(User) != users.end()) {
        users[User].insert(Interest);
        std::cout << "Interes \"" << Interest << "\" agregado al usuario " << User << ".\n";
    } else {
        std::cout << "El usuario " << User << " no existe.\n";
    }
}

// Obtener intereses de un usuario
std::vector<std::string> UserManager::getInterests(const std::string& User) const {
    if (users.find(User) != users.end()) {
        std::vector<std::string> interests(users.at(User).begin(), users.at(User).end());
        return interests;
    } else {
        std::cout << "El usuario " << User << " no existe.\n";
        return {};
    }
}
