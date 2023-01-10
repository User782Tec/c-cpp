#include<stdio.h>

int main()
{
    long long n,m,k=0;
    scanf("%lld%lld",&m,&n);
    k = m;
    for (int i = 0; i < n; i++)
    {
        k += m / 2;
        m = m / 2;
    }
    printf("%lld %lld",m,k);
    return 0;
}