# CMake minimum version
cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(ft_vox)

# Version de C++ standard
set(CMAKE_CXX_STANDARD 17)

# Ajouter le répertoire des headers
include_directories(includes)
include_directories(includes/glfw/include)
# Ajout des fichiers sources
add_executable(ft_vox src/main.cpp 
    src/glad.c)

target_link_libraries(ft_vox glfw)
