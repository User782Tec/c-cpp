#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[b] = {0};
    for (int i = 0; i < m; i++)
    {
        int t1, t2;
        scanf("%d %d",&t1,&t2);
        for (int j = t1; j <= t2; j++)
        {
            a[j] = 1;
        }
    }
    int s = 0;
    for (int i = 1; i <= n++; i++)
    {
        if (a[i] == 0)
        {
            s++;
        }
    }
    printf("%d",s);
    return 0;
}