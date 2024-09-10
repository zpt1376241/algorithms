#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;

int dp[N];
int fib1(int n)
{
    if(n==1||n==2)
        return 1;
    if(dp[n]!=0)
        return dp[n];
    dp[n] = fib1(n-1) + fib1(n-2);
    return dp[n];
}

int dp[N];
int fib2(int n)
{
    dp[1] = dp[2] = 1;
    for (int i = 3; i <= n;i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    return dp[n];
}