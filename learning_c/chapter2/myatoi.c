#include <stdio.h>


int main(){
	int i, n;
	n = 0;
	char s[10];
	char c;

	for (i=0; i<9; ++i){
		c = getchar();
		s[i] = c;
	}

	for (i=0; s[i] >= '0' && s[i]<= '9'; ++i){
		n = 10 * n + (s[i] - '0');
	}
	printf("%d\n", n);
}
