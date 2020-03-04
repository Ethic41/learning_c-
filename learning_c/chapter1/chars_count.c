#include <stdio.h>

int main() {
    int tab_count, blank_count, newline_count, c;
    newline_count = 0;
    blank_count = 0;
    tab_count = 0;

    while ((c = getchar()) != EOF) {
        if (c == "\n") { // this is just for learning sake as others below
            ++newline_count;
        }
        if (c == "\t") {
            ++tab_count;
        }
        if (c == " ") {
            ++blank_count;
        }
        printf("tab_count: %d, newline_count: %d, blank_count: %d\n", tab_count, newline_count, blank_count);
    }
}
