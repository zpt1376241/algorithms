#include <bits/stdc++.h>
using namespace std;

//( a * b ) mod m
int mul(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    int res = 0;
    while (b > 0)
    {
        if (b & 1)
            res = (res + a) % m;
        a = (a + a) % m;
        b >>= 1;
    }
    return res;
}

//a 的 n 次 幂
int fastPow(int a,int n)
{
    int ans = 0;
    while(n)
    {
        if(n&1)
            ans *= a;
        a *= a;
        n >>= 1;
    }
    return ans;
}

//(a 的 n 次 幂) mod m
int fast_Pow(int a,int n,int mod)
{
    int ans = 1 % mod;
    a %= mod;
    while(n)
    {
        if(n&1)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        n >>= 1;
    }
    return ans;
}
