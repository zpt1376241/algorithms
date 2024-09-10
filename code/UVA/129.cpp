#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 85;
int n, l, cnt, S[maxn];
int dfs(int cur)
{
    if (cnt++ == n)
    {
        for (int i = 0; i < cur; i++)
        {
            if (i && i % 4 == 0 && i % 64 != 0)
                cout << " ";
            if (i && i % 64 == 0)
                cout << endl;
            cout << (char)('A' + S[i]);
        }
        cout << endl;
        cout << cur << endl;
        return 0;
    }
    for (int i = 0; i < l; i++)
    {
        S[cur] = i;
        bool ok = true;
        for (int j = 1; j * 2 <= cur + 1; j++)
        {
            bool equal = true;
            for (int k = 0; k < j; k++)
                if (S[cur - k] != S[cur - k - j])
                {
                    equal = false;
                    break;
                }
            if (equal)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            if (!dfs(cur + 1))
                return 0;
    }
    return 1;
}
int main()
{
    while (cin >> n >> l)
    {
        if (!n && !l)
            break;
        cnt = 0;
        memset(S, 0, sizeof(S));
        dfs(0);
    }
    return 0;
}