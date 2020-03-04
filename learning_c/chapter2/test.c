#include <stdio.h>


int main(){
	int i;
	char s[10];
	int lim = 10;
	char c;

	for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
		s[i] = c;

	printf("%s", s);

}
