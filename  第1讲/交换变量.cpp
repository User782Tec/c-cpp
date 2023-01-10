// 交换两个整数变量的值

#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c;
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << a << b;
    return 0;
}