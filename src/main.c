#include "main.h"
#include "init.h"
#include "cleanup.h"
#include "run.h"

GLFWwindow* window;

GLuint shader;

int main() {

    init();

    while(run());

    return cleanup();
}