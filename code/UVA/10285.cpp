#include <bits/stdc++.h>
using namespace std;
int a[100][100], DP[100][100], R, C;
string name;
int dp(int i, int j)
{
    if (DP[i][j] > 0)
        return DP[i][j];
    int llr = 1;
    if (i - 1 >= 0 && a[i][j] > a[i - 1][j])
        llr = max(llr, 1 + dp(i - 1, j));
    if (i + 1 < R && a[i][j] > a[i + 1][j])
        llr = max(llr, 1 + dp(i + 1, j));
    if (j - 1 >= 0 && a[i][j] > a[i][j - 1])
        llr = max(llr, 1 + dp(i, j - 1));
    if (j + 1 < C && a[i][j] > a[i][j + 1])
        llr = max(llr, 1 + dp(i, j + 1));
    return DP[i][j] = llr;
}
int main()
{
    int N, lr;
    cin >> N;
    while (N--)
    {
        cin >> name >> R >> C;
        memset(DP, 0, sizeof(DP));
        lr = 0;
        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++)
                cin >> a[i][j];
        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++)
                lr = max(lr, dp(i, j));
        cout << name << ": " << lr << endl;
    }
    return 0;
}