//
// Created by hanes on 11/26/2024.
//

#ifndef CONTENTMANAGER_H
#define CONTENTMANAGER_H

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class ContentManager {
    private:
        vector<string> content;

    public:
        void addContent(string newContent);
        string getContentByCategory ();
};

#endif //CONTENTMANAGER_H
