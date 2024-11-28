#ifndef RECOMMENDATIONSYSTEM_H
#define RECOMMENDATIONSYSTEM_H

#include <string>
#include <vector>
#include "UserManager.h"
#include "Graph.h"
#include "ContentManager.h"

class RecommendationSystem {
public:
    // Métodos principales
    void addUser(const std::string& user);
    void addInterest(const std::string& user, const std::string& interest);
    void addFriend(const std::string& user1, const std::string& user2);
    void addContent(const std::string& category, const std::string& content);

    std::vector<std::string> recommendContent(const std::string& user);

    // Métodos para obtener acceso a UserManager y Graph
    UserManager& getUserManager();
    Graph& getGraph();

private:
    UserManager userManager;
    Graph graph;
    ContentManager contentManager;
};

#endif // RECOMMENDATIONSYSTEM_H
