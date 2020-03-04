#include <stdio.h>

int main() {
    int c;
    //int blank = 0;

    while ((c = getchar()) != EOF/*'\t'*/) {
        if (c != ' ') {
            putchar(c);
        }
        if (c == ' ') {
            while ((c = getchar()) == ' ') { ;
            }
            putchar(' ');
            putchar(c);
        }
    }
}

//end of code
