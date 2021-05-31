#include<stdio.h>



int main(){
   int a[100];
   int i =0;
   int sum = 0;
   int min;
   while (true) 
   {
   	printf("Nhap vao so thu %d:", i+1);
   	scanf("%d", &a[i]);
   	min = a[0];
   	if (a[i++] == 0)
   	break;
   }
   i--;
   for (int j = 0; j < i; j++) {
   	if (a[j] % 2 != 0) {
   		sum += a[j];
	   }
	if (a[j]<min) {
		min = a[j];
	}   
   }
   
   printf("\nthe sum of the odd number %d", sum);
   printf("\nminimum value is %d", min);

}

	
