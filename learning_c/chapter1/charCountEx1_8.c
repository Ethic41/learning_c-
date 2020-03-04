#include <stdio.h>

int main() {
    int blanks, tabs, nl, c;
    blanks = tabs = nl = 0;

    while ((c = getchar()) != ' ') {
        if (c == '\n') {
            ++nl;
        }
        if (c == '\t') {
            ++tabs;
        }
        if (c == ' ') {
            ++blanks;
        }
    }
    printf("blanks ==> %d\ntabs ==> %d\nnewlines ==> %d\n", blanks, tabs, nl);
}

//end of code
