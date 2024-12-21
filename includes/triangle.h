#ifndef TRIANGLE_H
#define TRIANGLE_H

class triangle
{
private:
    unsigned int VBO;
    unsigned int vertexShader;
    unsigned int fragmentShader;

public:
    triangle();
    ~triangle();
};

#endif // !TRIANGLE_H