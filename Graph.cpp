#include "Graph.h"

void Graph::addUser(const std::string& user) {
    if (adjList.find(user) == adjList.end()) {
        adjList[user] = {};
    }
}

void Graph::addFriend(const std::string& user1, const std::string& user2) {
    adjList[user1].insert(user2);
    adjList[user2].insert(user1);
}

std::vector<std::string> Graph::getFriends(const std::string& user) {
    std::vector<std::string> friends;
    if (adjList.find(user) != adjList.end()) {
        for (const auto& friendUser : adjList[user]) {
            friends.push_back(friendUser);
        }
    }
    return friends;
}