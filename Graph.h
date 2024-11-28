#ifndef GRAPH_H
#define GRAPH_H

#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

class Graph {
public:
    void addUser(const std::string& user);
    void addFriend(const std::string& user1, const std::string& user2);
    std::vector<std::string> getFriends(const std::string& user);

private:
    std::unordered_map<std::string, std::unordered_set<std::string>> adjList;
};

#endif // GRAPH_H
