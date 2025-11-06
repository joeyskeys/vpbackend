#include <iostream>

#include <GLFW/glfw3.h>

int main(int argc, char* argv[])
{
    if (!glfwInit())
    {
        std::cout << "GLFW: unable to initialize" << std::endl;
        return -1;
    }

    //GLFWmonitor* monitor = glfwGetPrimaryMonitor();
    //const GLFWvidmode* video_mode = glfwGetVideoMode(monitor);
    //const int32_t width = static_cast<int32_t>(video_mode->width * 0.9f);
    //const int32_t height = static_cast<int32_t>(video_mode->height * 0.9f);
    const width = 1280;
    const height = 720;

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow* window = glfwCreateWindow(
        width, height,
        "vp",
        nullptr, nullptr
    );

    if (window == nullptr)
    {
        std::cout << "GLFW: unable to create window" << std::endl;
        return -1;
    }

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}