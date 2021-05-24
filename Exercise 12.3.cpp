#include<stdio.h>
#include<math.h>


int SUM(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		 sum += i*i*i;
	}
	return sum;
}


int uoc(int n) {
	for (int i = 1; i <= n; i++ ) {
		if (n % i == 0) {
			printf("%d ", i);
		}
	}
}

int perfect(int n) {
	for (int i = 1; i <= n; i++) {
		printf("%d ", i*i);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%lld\n", SUM(n));
	uoc(n);
	printf("\n");
	perfect(n);
}
