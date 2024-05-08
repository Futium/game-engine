#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main()
{
    if (!glfwInit()) // Initialize GLFW
    {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }
}