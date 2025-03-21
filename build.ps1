param (
    [switch]$DEBUG = $false
)


if ($DEBUG) {
    $DEBUGS = "-DMKT_DEBUG"
    $DEBUGG = "-g"
} else {
    $DEBUGS = ""
    $DEBUGG = ""
}

gcc ./src/main.c ./src/init.c ./src/cleanup.c ./src/run.c ./src/gen.c C:/sdk/glad/src/glad.c $DEBUGS $DEBUGG -L C:/sdk/lib/ -I C:/sdk/freetype-windows-binaries/include -I C:\sdk\glad\include\KHR -I C:\sdk\cglm\include\ -I C:\sdk\glad\include -I C:\sdk\glfw-3.3.6\include\ -l opengl32 -l glfw3 -l gdi32 -o ./build/main.exe