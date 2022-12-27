// 判断一个整数是不是“水仙花数”。

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c;
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    if (a * a * a + b * b * b + c * c * c == n)
        printf("Yes");
    else
        printf("No");
    return 0;
}