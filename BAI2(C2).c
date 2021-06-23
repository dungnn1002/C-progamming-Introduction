#include<stdio.h>
#include<string.h>


typedef struct DoVat {
	char TenDV[30];
	int weight;
	int value;
	float quantity;
	int soluongvat;
}DV;

void nhapN(DV a[], int n);
void output(DV a[], int n);
void taobang(DV a[], int n, int W, int F[][W+1], int X[][W+1]);
void trabang(DV a[], int n, int W, int X[][W+1]);
//void inbang(int n, int W, int F[][W+1], int X[][W+1]);
main() {
	int n, W;
	FILE  *fptr = fopen("BAG.TXT", "r");
	fscanf(fptr, "%d %d", &n, &W);
	DV a[n];
	int i;
	for(i=0;i<n;i++)
    {
        fscanf(fptr,"%d %d %c",&a[i].weight,&a[i].value,&a[i].TenDV);
    }
    fclose(fptr);
    int F[n][W+1];
	int X[n][W+1];
	taobang(a, n, W, F, X);
	trabang(a, n, W, X);
	output(a,n);
}
void taobang(DV a[], int n, int W, int F[][W+1], int X[][W+1])
{
	int xk, yk, k;
	int XMax, V;
	int FMax;
	
	//Dien dong dau tien cho hai bang
	for (V =0; V<= W; V++) {
		X[0][V] = V/a[0].weight;
		F[0][V] = X[0][V]*a[0].value;
	}
	
	//Dien cac dong con lai cua hai bang
	for (k = 1; k<n;k++) {
		for (V = 0; V <= W; V++) {
			FMax = F[k-1][V];
			XMax = 0;
			yk= V/a[k].weight;
			for (xk =1; xk<=yk; xk++) {
				if(F[k-1][V-xk*a[k].weight]+xk*a[k].value>FMax){
					FMax= F[k-1][V-xk*a[k].weight]+xk*a[k].value;
					XMax= xk;
				}
			}
			F[k][V] = FMax;
			X[k][V]= XMax;
		}
	}
		
}
void trabang(DV a[], int n, int W, int X[][W+1]) {
	int k, V;
	V = W;
	for (k = n-1; k>=0; k--) {
		a[k].soluongvat = X[k][V];
		V = V -X[k][V] *a[k].weight;
	}
}


//void inbang(int n, int W, int F[][W+1], int X[][W+1]) {
//	int V, k;
//	printf("\n\nBang F va X: \n\n");
//	for (k=0; k < n;k++) {
//		for (V=0;V <= W; V++)
//		printf("%c%4d|%2d",186, F[k][V], X[k][V]);
//	printf("%c\n",186);
//	}
//}
void output(DV a[], int n) {
   int TongGt = 0;
   int i;
    for ( i = 0;i < n; i++) {
   	  	TongGt += a[i].soluongvat*a[i].value;
	}
	printf(" %d\n", TongGt);
	int j;
   for ( j = 0;j < n; j++) {
   	  if (a[j].soluongvat != 0) {
   	  	printf("%s %d\n", a[j].TenDV, a[j].soluongvat);
		}
   }
}






