#include <stdio.h>


int main() {
    int c, starting, lastChar;

    starting = 1;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (starting == 1) {
                ;
            } else if (lastChar != ' ' && lastChar != '\t' && lastChar != '\n') {
                putchar('\n');
                lastChar = c;
            }
        } else if (c) {
            putchar(c);
            starting = 0;
            lastChar = c;
        }
    }
}

//end of code
