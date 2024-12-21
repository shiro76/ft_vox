#!/bin/bash

# Créer un dossier pour les dépendances
mkdir -p includes
cd includes

# Télécharger Assimp
echo "Téléchargement d'assimp..."
git clone --depth=1 https://github.com/assimp/assimp.git
cd assimp
mkdir -p build
cd build
cmake .. -DCMAKE_INSTALL_PREFIX=../../assimp_install
make -j$(nproc)
make install
cd ../../

#Télécharger GLFW
echo "Téléchargement de GLFW..."
git clone --depth=1 https://github.com/glfw/glfw.git
cd glfw
mkdir -p build
cd build
cmake .. --DCMAKE_INSTALL_PREFIX=../../glfw_install
make -j$(nproc)
make install
cd ../../

# Télécharger GLM
echo "Téléchargement de GLM"
git clone --depth=1 https://github.com/g-truc/glm.git
cd glm
mkdir -p build
cd build
cmake .. --DCMAKE_INSTALL_PREFIX=../../glm_install
make -j$(nproc)
make install
cd ../../

# stb_image (fichier unique pas besoin de compilation)
echo "Téléchargement de stb_image"
mkdir -p stb
cd stb
wget https://raw.githubusercontent.com/nothings/stb/master/stb_image.h
cd ../

echo "Installation terminée."