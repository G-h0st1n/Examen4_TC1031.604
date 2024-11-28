cmake_minimum_required(VERSION 3.28)
project(integracione4)

set(CMAKE_CXX_STANDARD 17)

add_executable(integracione4 main.cpp
        menu.cpp
        RecommendationSystem.cpp
        ContentManager.cpp
        UserManager.cpp
        Graph.cpp)
