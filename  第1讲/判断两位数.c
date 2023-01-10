// 判断一个数是不是两位数

#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if (a >= 10 && a <= 99)
        printf("Yes");
    else
        printf("No");
}