#include<bits/stdc++.h>
using namespace std;
int f[5001];
const int N = 501;
int dp[N][N];
int main()
{
    map<int, int> mp;
    for (int i = 2; i <= 8;i++)
        for (int j = 1; j <= 12;j++)
            mp[i + j]++;
    for (int i = 3; i <= 20;i++)
        cout << i<<":"<<mp[i] << ' ';
}