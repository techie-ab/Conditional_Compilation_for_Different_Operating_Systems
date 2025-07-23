#include <stdio.h>

int main() {

    #ifdef _WIN32
        printf("Hello from Windows!\n");
    #elif __linux__
        printf("Hello from Linux!\n");
    #elif __APPLE__
        printf("Hello from macOS!\n");
    #else
        printf("Hello from an unknown OS!\n");
    #endif
    return 0;
}