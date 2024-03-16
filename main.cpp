#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
    if (glfwInit() == GLFW_FALSE)
    {
        return 0;
    }

    if (gladLoadGL() == 0)
    {
        return 0;
    }
    return 0;
}
