#include "init.h"
#include "main.h"
#include "gen.h"

const char * tempVerShader = "#version 330 core\nlayout(location = 0) in vec3 vertexPosition_modelspace;\nvoid main(){\ngl_Position.xyz = vertexPosition_modelspace;\ngl_Position.w = 1.0;\n}";

const char * tempFragShader = "#version 330 core\nout vec3 color;\nvoid main(){\n  color = vec3(1,0,0);\n}";

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}  

void init() {

    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    window = glfwCreateWindow( 1024, 768, "Tutorial", NULL, NULL);
    glfwMakeContextCurrent(window);
    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
    glViewport(0, 0, 1024, 768);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);



    shader = genShaders(tempVerShader, tempFragShader);
}