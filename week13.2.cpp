#include<stdio.h>



int main(){
   int a[100];
   int i =0;
   int sum = 0;
   int min;
   int n;
   scanf("%d", &n);
   for (i = 0; i < n; i++) {
   	    printf("Nhap vao so %d :", i+1);
	    scanf("%d", &a[i]);
   }
   
   for (int j = 0; j < n-2; j++) {
   	    if (a[j+1] > a[j] && a[j+1] > a[j+2]) {
   	    	sum += a[j+1];
		   }
   }
   
   printf("the sum of the local maximum numbers is %d", sum);

}

	
