//
// Created by frpat on 11/26/2024.
//

#ifndef RECOMMENDATIONSYSTEM_H
#define RECOMMENDATIONSYSTEM_H

#include <string>
#include <unordered_set>
#include <vector>
#include "UserManager.h"
#include "ContentManager.h"
#include "Graph.h"

using namespace std;

class RecommendationSystem {
public:
    void addUser(const string& user);
    void addContent(const string& content);
    void addFriend(const string& user1, const string& user2);
    vector<string> recommendContent(const string& user);

private:
    UserManager userManager;
    ContentManager contentManager;
    Graph graph;
};

#endif //RECOMMENDATIONSYSTEM_H
