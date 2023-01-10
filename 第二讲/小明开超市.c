#include<stdio.h>

int main()
{
    double n;
    scanf("%lf", &n);
    if (n > 100)
    {
        n = n * 0.9;
    }
    printf("%0.1lf", n);
    return 0;
}