#include <iostream>
<<<<<<< HEAD
#include "RecommendationSystem.h"
using namespace std;
int main() {
    RecommendationSystem system;
    int choice;
    std::string user, interest, category, content, user1, user2;

    do {
        cout << "\n--- Menu Principal ---\n";
        cout << "1. Crear amistad\n";
        cout << "2. Agregar contenido\n";
        cout << "3. Agregar interes a un usuario\n";
        cout << "4. Ver recomendaciones\n";
        cout << "5. Agregar usuario\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cout << "7. View Users, Friends, and Recommendations\n"; // Nueva opción
        std::cin >> choice;

        switch (choice) {
            case 5:
                std::cout << "Enter user name: ";
                std::cin >> user;
                system.addUser(user);
                break;

            case 3:
                std::cout << "Enter user name: ";
                std::cin >> user;
                std::cout << "Enter interest: ";
                std::cin >> interest;
                system.addInterest(user, interest);
                break;

            case 1:
                std::cout << "Enter first user: ";
                std::cin >> user1;
                std::cout << "Enter second user: ";
                std::cin >> user2;
                system.addFriend(user1, user2);
                break;

            case 2:
                std::cout << "Enter category: ";
                std::cin >> category;
                std::cout << "Enter content: ";
                std::cin >> content;
                system.addContent(category, content);
                break;

            case 4:
                std::cout << "Enter user name: ";
                std::cin >> user;
                {
                    auto recommendations = system.recommendContent(user);
                    std::cout << "Recommendations for " << user << ": ";
                    for (const auto& rec : recommendations) {
                        std::cout << rec << " ";
                    }
                    std::cout << "\n";
                }
                break;

            case 7: // Nueva funcionalidad
                {
                    auto allUsers = system.getUserManager().getAllUsers();
                    for (const auto& u : allUsers) {
                        std::cout << "User: " << u << "\n";
                        auto friends = system.getGraph().getFriends(u);
                        std::cout << "Friends with: ";
                        for (const auto& f : friends) {
                            std::cout << f << " ";
                        }
                        std::cout << "\nRecommendations: ";
                        auto recommendations = system.recommendContent(u);
                        for (const auto& rec : recommendations) {
                            std::cout << rec << " ";
                        }
                        std::cout << "\n\n";
                    }
                }
                break;

            case 6:
                std::cout << "Exiting...\n";
                break;

            default:
                std::cout << "Invalid choice, try again.\n";
        }
    } while (choice != 6);

=======

int main() {
    std::cout << "Hello, World!" << std::endl;
>>>>>>> 8ea2455e7646692c05827fea68b94b7470bc1ff9
    return 0;
}
