#include <stdio.h>
#define lim1 10
#define lim2 5

int any(char str1[], char str2[]);

int main(){
    char str1[lim1];
    char str2[lim2];
    char c;
    int i;

    printf("enter first string:\n");
    for(i = 0; (i < lim1 - 1) && (c=getchar()) != '\n'; i++){
        str1[i] = c;
    }
    str1[lim1 -1] = '\0';


    printf("enter second string:\n");
    for(i = 0; (i < lim2 -1) && (c=getchar()) != '\n'; i++){
        str2[i] = c;
    }
    str2[lim1 - 1] = '\0';

    printf("%d\n", any(str1, str2));
}

int any(char str1[], char str2[]){
    int s1,s2;

    for(s2=0; str2[s2] != '\0'; s2++){
        s1 = 0;
        while(str1[s1++] != '\0'){
            if (str1[s1 - 1] == str2[s2]){
                return s1-1;
            }
        }
    }
    return -1;
}