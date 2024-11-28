#include "UserManager.h"

void UserManager::addUser(const std::string& user) {
    if (usersMap.find(user) == usersMap.end()) {
        usersMap[user] = {};
    }
}

void UserManager::addInterest(const std::string& user, const std::string& interest) {
    if (usersMap.find(user) != usersMap.end()) {
        usersMap[user].push_back(interest);
    }
}

std::vector<std::string> UserManager::getInterests(const std::string& user) {
    if (usersMap.find(user) != usersMap.end()) {
        return usersMap[user];
    }
    return {};
}

std::vector<std::string> UserManager::getAllUsers() {
    std::vector<std::string> users;
    for (const auto& [user, _] : usersMap) {
        users.push_back(user);
    }
    return users;
}
