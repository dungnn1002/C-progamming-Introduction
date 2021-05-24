#include<stdio.h>

void print(int n, char c) {
	for (int i =1; i <=n; i++) {
	    for (int j = 1; j <= i; j++) {
	    	printf("%c", c);
		}
		printf("\n");
	}
}

int main () {
	int n;
	char c;
	scanf("%d", &n);
	scanf("\n");
	scanf("%c", &c);
	print(n, c);
	return 0;
}



