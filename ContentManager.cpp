//
// Created by hanes on 11/26/2024.
//
#include "ContentManager.h"
#include <unordered_set>

void ContentManager::addContent(const std::string& category, const std::string& content) {
    contentMap[category].push_back(content);
}

std::vector<std::string> ContentManager::getRecommendations(const std::unordered_set<std::string>& interests) {
    std::vector<std::string> recommendations;

    // Buscar contenido basado en los intereses
    for (const auto& interest : interests) {
        if (contentMap.find(interest) != contentMap.end()) {
            const auto& contentList = contentMap[interest];
            recommendations.insert(recommendations.end(), contentList.begin(), contentList.end());
        }
    }
    return recommendations;
}
