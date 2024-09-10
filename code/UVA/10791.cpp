#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll divide(ll &n, int i)
{
    ll res = 1;
    while (n % i == 0)
    {
        n /= i;
        res *= i;
    }
    return res;
}
ll solve(ll n)
{
    if (n == 1)
        return 2;
    int len = sqrt(n) + 1;
    ll res = 0, num = 0;
    for (int i = 2; i <= len; i++)
    {
        if (n % i == 0)
        {
            res += divide(n, i);
            num++;
        }
    }

    if (n > 1)
    {
        num++;
        res += n;
    }
    if (num == 1)
        res += 1;
    return res;
}

int main()
{
    ll n;
    int kase = 0;
    while (~scanf("%lld", &n) && n)
    {
        printf("Case %d: %lld\n", ++kase, solve(n));
    }
    return 0;
}
