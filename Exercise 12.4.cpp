#include<stdio.h>

int calculate(int n) {
	int luong;
	if (n < 10) {
		printf("Khong co luong");
	}
	else if (n >= 10 && n <=40) {
		luong = 15000 * n;
		printf("%d", luong);
	}
	else if (n > 40 && n <=65) {
		luong = 15000 * n * 1.5;
		printf("%d", luong);
	}
	else {
		printf("qua thoi gian lam viec");
	}
}


int main(){
	int n;
	scanf("%d", &n);
	calculate(n);
	return 0;
}


