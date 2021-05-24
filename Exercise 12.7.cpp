#include <stdio.h>
#include<math.h>

int check(int n) {
    while (n > 0) {
        int temp = n % 10;
        if (temp % 2 == 1)
            return false;
        n /= 10;
    }
    return true;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (check(n) == true)
        printf("%d toan so chan",n);
    else
        printf("%d khong phai toan so chan", n);
    return 0;
}
