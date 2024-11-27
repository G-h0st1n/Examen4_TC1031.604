//
// Created by frpat on 11/26/2024.
//

#include "RecommendationSystem.h"

void RecommendationSystem::addUser(const string& user) {
    userManager.addUser(user);
}

void RecommendationSystem::addContent(const string& content) {
    contentManager.addContent(content);
}

void RecommendationSystem::addFriend(const string& user1, const string& user2) {
    graph.addEdge(user1, user2);
}

vector<string> RecommendationSystem::recommendContent(const string& user) {
    unordered_set<string> friends = graph.bfs(user);
    unordered_set<string> interests;

    for (const auto& friendUser : friends) {
        auto friendInterests = userManager.getInterests(friendUser);
        interests.insert(friendInterests.begin(), friendInterests.end());
    }

    return contentManager.recommendByInterests(interests);
}
