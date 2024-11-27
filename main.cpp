#include "UserManager.h"
#include <iostream>

int main() {
    UserManager manager;

    manager.addUser("Mariano");
    manager.addInterest("Mariano", "Tecnologia");
    manager.addInterest("Mariano", "Musica");

    manager.addUser("Ana");
    manager.addInterest("Ana", "Lectura");

    auto interests = manager.getInterests("Mariano");
    std::cout << "Intereses de Mariano: ";
    for (const auto& Interest : interests) {
        std::cout << Interest << " ";
    }
    std::cout << std::endl;

    return 0;
}
