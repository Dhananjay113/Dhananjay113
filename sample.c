#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void retrieveAndRunCode(const char* rawLink) {
    // Construct the command to retrieve the raw code using wget
    char command[512];
    sprintf(command, "wget %s -O code.c", rawLink);

    // Execute the command to retrieve the code
    int result = system(command);
    if (result != 0) {
        printf("Failed to retrieve the code from GitHub.\n");
        return;
    }

    // Compile and run the retrieved code
    system("gcc code.c -o program && program.exe");
}

int main() {
    const char* rawLink = "https://raw.githubusercontent.com/Dhananjay113/Dhananjay113/main/krishna2.c";

    retrieveAndRunCode(rawLink);

    return 0;
}
