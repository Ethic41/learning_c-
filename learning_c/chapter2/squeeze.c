#include <stdio.h>

void squeeze(char str1[], char str2[]);
#define str1lim 10
#define str2lim 5
int main(){
    char str1[str1lim];
    char str2[str2lim];
    char c;
    int i;
    printf("enter string1:\n");
    for(i=0; (i < str1lim - 1); ++i){
        c=getchar();
        str1[i] = c;
    }

    str1[str1lim -1] = '\0';

    printf("enter string2:\n");
    for(i=0; (i < str2lim - 1); ++i){
        c=getchar();
        str2[i] = c;
    }
    str2[str2lim -1] = '\0';
    squeeze(str1, str2);
    printf("%s\n", str1);
}

void squeeze(char str1[], char str2[]){
    int s1;
    int s2 = 0;
    int i;

    for(; str2[s2] != '\0'; s2++){
        s1 = i = 0;	
        while((str1[s1]) != '\0'){
            if(str1[s1++] != str2[s2]){
                str1[i++] = str1[s1-1];
            }
        }
        str1[i] = '\0';
    }
}
