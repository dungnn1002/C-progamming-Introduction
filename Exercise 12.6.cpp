#include<stdio.h>

void change() {
	double c;
	for (int i =0; i <= 20; i++) {
		c = (double)5/9 *(i-32);
		printf("%d\t%f\n", i, c);
	}
}

int main () {
	printf("F\tC\n");
	change();
	return 0;
}



