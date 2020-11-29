#include <stdio.h>

#define MAXLINE 1000 /*maximum input line*/

int getline(char line[], int maxline);

void copy(char to[], const char from[]);

/*print the longest input line*/
int main() {
    int max;
    int len; /*current line length*/
    char line[MAXLINE]; /*current input line*/
    char longest[MAXLINE]; /*longest line saved here*/

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("%s", longest);
    }
    return 0;
}

/*getline: read a line into s return length*/
int getline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != '\t' && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/*copy: copy 'from' into 'to' assume to is big enough */
void copy(char to[], const char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
//end of code
