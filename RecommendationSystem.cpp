<<<<<<< HEAD
=======
//
// Created by frpat on 11/27/2024.
//

>>>>>>> 8ea2455e7646692c05827fea68b94b7470bc1ff9
#include "RecommendationSystem.h"
#include <unordered_set>
#include <iostream>

void RecommendationSystem::addUser(const std::string& user) {
    userManager.addUser(user);
    graph.addUser(user);
}

void RecommendationSystem::addInterest(const std::string& user, const std::string& interest) {
    userManager.addInterest(user, interest);
}

void RecommendationSystem::addFriend(const std::string& user1, const std::string& user2) {
    graph.addFriend(user1, user2);
}

void RecommendationSystem::addContent(const std::string& category, const std::string& content) {
    contentManager.addContent(category, content);
}

std::vector<std::string> RecommendationSystem::recommendContent(const std::string& user) {
    std::unordered_set<std::string> allInterests;

    // Obtener los amigos del usuario
    auto friends = graph.getFriends(user);

    // Obtener intereses de los amigos y agregarlos al conjunto de intereses
    for (const auto& friendUser : friends) {
        auto friendInterests = userManager.getInterests(friendUser);
        for (const auto& friendInterest : friendInterests) {
            allInterests.insert(friendInterest);  // Solo agregamos los intereses de los amigos
        }
    }

    // Generar recomendaciones basadas en los intereses combinados
    return contentManager.getRecommendations(allInterests);
}

// Métodos para obtener acceso a UserManager y Graph
UserManager& RecommendationSystem::getUserManager() {
    return userManager;
}

Graph& RecommendationSystem::getGraph() {
    return graph;
}
