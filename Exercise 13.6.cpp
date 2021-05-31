#include<stdio.h>

int n;

void input(int a[][3]) {
{
for (int i = 0; i < n; i++)
for (int ij = 0; ij < n; ij++)
{
scanf("%d", &a[i][ij]);
}
}
}
void output(int a[][3])
{
for (int i = 0; i < n; i++)
{
for (int ij = 0; ij < n; ij++) {
printf("%d ", a[i][ij]);
}
printf("\n");
}
}

void tich(int a[][3], int b[][3], int c[][3]) {
	int k;
for(int i=0;i<n;i++)  
{  
for(int j=0;j<n;j++)  
{  
c[i][j]=0;
for(int k=0;k<n;k++)  
{  
c[i][j]+=a[i][k]*b[k][j];  
}  
}  
}  
}
 
main () {
	scanf("%d", &n);
	int a[3][3], b[3][3], c[3][3];
	input(a); printf("\n");
	input(b);printf("\n");
	output(a);printf("\n");
	output(b);printf("\n");
	tich(a,b,c);
	output(c);
	
}
