#include <bits/stdc++.h>
using namespace std;
const int N = 1011;
int w[N], v[N]; // 价值、体积
//int dp[N][N];
// 递推代码
// int solve(int n, int m) // n件物品、m总体积
// {
// 	for (int i = 1; i <= n; i++)
// 	{
// 		for (int j = 0; j <= m; j++)
// 		{
// 			if (j < v[i])
// 				dp[i][j] = dp[i - 1][j];
// 			else
// 				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
// 		}
// 	}
// 	return dp[n][m];
// }

// 记忆化代码
// int solve(int i, int j)
// {
// 	if (dp[i][j] != 0)
// 		return dp[i][j];
// 	if (i == 0)
// 		return 0;
// 	int res;
// 	if (j < v[i])
// 		res = solve(i - 1, j);
// 	else
// 		res = max(solve(i - 1, j), solve(i - 1, j - v[i]) + w[i]);
// 	return dp[i][j] = res;
// }

// // 滚动数组1
// int dp[2][N];
// int solve(int n, int C)
// {
// 	int now = 0, old = 1;
// 	for (int i = 1; i <= n; i++)
// 	{
// 		swap(now, old);
// 		for (int j = 0; j <= C; j++)
// 		{
// 			if (v[i] > j)
// 				dp[now][j] = dp[old][j];
// 			else
// 				dp[now][j] = max(dp[old][j], dp[old][j - v[i]] + w[i]);
// 		}
// 	}
// 	return dp[now][C];
// }

// 滚动数组2
int dp[N];
int solve(int n, int m) // n件物品、m总体积
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = m; j >= v[i]; j--)
		{
			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
		}
	}
	return dp[m];
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, C;
		cin >> n >> C;
		for (int i = 1; i <= n; i++)
			cin >> w[i];
		for (int i = 1; i <= n; i++)
			cin >> c[i];
		memset(dp, 0, sizeof dp);
		cout << solve(n, C) << endl;
	}
	return 0;
}
