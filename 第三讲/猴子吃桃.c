#include<stdio.h>

int main()
{
    int n;
    long long s = 1;
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
    {
        s = (s + 1) * 2;
    }
    printf("%lld", s);
    return 0;
}