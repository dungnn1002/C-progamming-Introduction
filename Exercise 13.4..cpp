#include <stdio.h>

void swap(int a[]) {
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (a[i] < a[j]) {
				int temp;
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
 		}
	}
}

void swapodd(int a[]) {
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (a[i] < a[j] && a[i] % 2 != 0 && a[j] % 2 != 0) {
				int temp;
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
 		}
	}
}

void nhap(int a[]) {
	for (int i = 0; i < 10; i++) {
		printf("Nhap vao phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[]) {
		for (int i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
}

main () {
	int a[10];
	nhap(a);
	swap(a);
	swapodd(a);
	xuat(a);
}


