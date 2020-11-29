#include <stdio.h>


int main() {
    int c, i;
    int array[200];

    for (i = 0; i <= 10; i++) {
        c = getchar();
        array[c] = c;
    }

    for (i = 0; i <= 200; i++) {
        putchar(array[i]);
    }
}

//end of code
