<<<<<<< HEAD
=======
//
// Created by hanes on 11/26/2024.
//

>>>>>>> 8ea2455e7646692c05827fea68b94b7470bc1ff9
#ifndef CONTENTMANAGER_H
#define CONTENTMANAGER_H

#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>  // Asegúrate de incluir unordered_set aquí

class ContentManager {
public:
    void addContent(const std::string& category, const std::string& content);
    std::vector<std::string> getRecommendations(const std::unordered_set<std::string>& interests);

private:
    std::unordered_map<std::string, std::vector<std::string>> contentMap;
};

#endif // CONTENTMANAGER_H
