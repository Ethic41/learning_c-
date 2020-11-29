#include <stdio.h>
#include "makeWordHistogram.h"


int main() {
    int c, count, starting, lastChar;

    count = 0;
    starting = 1;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') { // these chars are word boundaries
            if (starting == 1) { // if we are just starting no need for histogram
                ;
            } else if (lastChar != ' ' && lastChar != '\t' && lastChar != '\n') { // no histogram for any of these
                makeWordHistogram(count);
                count = 0;
                lastChar = c;
            }
        } else if (c) {
            ++count;
            starting = 0; // switch off starting, cos we already started
            lastChar = c;
        }
    }
}

//end of code
