#include<stdio.h>
int main()
{
    int n;
    printf("nhap chieu dai mang: ");
    scanf("%d", &n);
    int a[100];
    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if( n % 2 == 0) {
    	int dem = 0;
    for(int i=0; i < n/2;i++)
    {
        if(a[i] == a[n-1-i])
        dem ++;
    }
    if (dem==n/2) printf("Mang doi xung");
     else printf("Mang khong doi xung");
}
    if (n % 2 != 0) {
    	int dem = 0;
    	for(int i=0; i < (n-1)/2+1;i++)
    {
        if(a[i] == a[n-1-i])
        dem ++;
    }
    if (dem==(n-1)/2+1) printf("Mang doi xung");
    else printf("Mang khong doi xung");
	}
}

