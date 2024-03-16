#include <iostream>

#include <glad/gl.h>
#include <GLFW/glfw3.h>

int main() {
    if (glfwInit() == GLFW_FALSE)
    {
        return 0;
    }

    if (gladLoadGL(glfwGetProcAddress) == 0)
    {
        return 0;
    }
    return 0;
}
