#include "main.h"
#include "cleanup.h"

int cleanup() {
    // glfw window
    glfwTerminate();

    return 0;
}