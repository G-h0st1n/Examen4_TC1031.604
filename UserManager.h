#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <string>
#include <vector>
#include <unordered_map>

class UserManager {
public:
    void addUser(const std::string& user);
    void addInterest(const std::string& user, const std::string& interest);
    std::vector<std::string> getInterests(const std::string& user);
    std::vector<std::string> getAllUsers();

private:
    std::unordered_map<std::string, std::vector<std::string>> usersMap;
};

#endif // USERMANAGER_H
