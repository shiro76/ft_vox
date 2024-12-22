mkdir includes
cd includes

echo "Telechargement de GLFW"
mkdir glfw
cd glfw
curl -LO https://github.com/glfw/glfw/releases/download/3.3.8/glfw-3.3.8.bin.WIN64.zip
tar -xf glfw-3.3.8.bin.WIN64.zip
cd glfw-3.3.8.bin.WIN64
move include ../
ren lib-vc2022 lib
move lib ../
cd ../
del glfw-3.3.8.bin.WIN64.zip
rmdir /S /Q glfw-3.3.8.bin.WIN64
cd ../
