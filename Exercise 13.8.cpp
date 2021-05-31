#include<stdio.h>

int n;
void swap(int a[]) {

	for (int i =0; i < n/2; i++) {
		int tmp =a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = tmp; 
	}
}
void input(int a[]) {
	for (int i = 0; i<n; i++) {
		printf("Nhap vao phan tu  thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
}

void output(int a[]) {
		for (int i = 0; i<n; i++) {
		printf("%d ", a[i]);
	}
}

main () {
	scanf("%d", &n);
	int a[100];
	input(a);
	swap(a);
	output(a);
}
