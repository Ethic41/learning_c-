#include <stdio.h>


int main(){
	char s[10];
	int i;
	char c;
	int limit = 10;

	for(i=0; i < limit-1 ? (c=getchar()) != '\n' ? c != EOF: 1==0 : 1==0; i++){
		s[i] = c;
	}

	printf("%s", s);

}
