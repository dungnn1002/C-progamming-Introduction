#include <stdio.h>
#include<math.h>

void Leapyear(int n) {
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
		printf("%d is Leapyear", n);
	} 
	else printf("%d is not year");
}

int main() {
	int n;
	printf("Nhap vao nam :");
	scanf("%d", &n);
	Leapyear(n);
}
