#include <stdio.h>
#include <stdlib.h>

#define LINE_LENGTH 1024

int main(int argc, char *argv[]) {

    char *fileName = NULL;
    if (argv[1]) {
        fileName = argv[1];
    } else {
        fileName = "defaultTest.txt";
    }
    FILE *filePointer = fopen(fileName, "r");

    char buffer[LINE_LENGTH];
    int lines = 0, words = 0;
    char lastChar = ' ';

    while(fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        lines++;

        for (size_t i = 0; buffer[i] != '\0'; i++) {
            const char current = buffer[i];

            if ((current == ' ' || current == '\n') && lastChar != ' ' && lastChar != '\n') {
                words++;
            }

            lastChar = current;
        }
    }

    if (lastChar != ' ' || lastChar != '\n') {
        words++;
    }

    printf("Total Lines: %i\nTotal Words: %i\n", lines, words);

    return 0;
}