#include <bits/stdc++.h>
using namespace std;
const int N = 105;

int w[N][N], v[N][N], s[N];
int dp[N];
int n, m;

int solve(int n, int m)//n����Ʒ��m��������ÿ����Ʒs[i]��
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = m; j >= 0; j--)
		{
			for (int k = 1; k <= s[i]; k++) // ������i���е�ÿ����Ʒ
			{
				if (j >= v[i][k])
					dp[j] = max(dp[j], dp[j - v[i][k]] + w[i][k]);
			}
		}
	}
	return dp[m];
}
int main()
{
	while (cin >> n >> m && n && m)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cin >> w[i][j];
				v[i][j] = j;
			}
		}
		memset(dp, 0, sizeof dp);

		cout << solve(n ,m) << endl;
	}
}
