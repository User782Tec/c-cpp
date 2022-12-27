// 交换输出一个两位数的十位和个位

#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d %d",a % 10,a / 10 % 10);
    return 0;
}