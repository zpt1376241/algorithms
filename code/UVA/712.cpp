#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e6 + 5;
const ll mod = 998244353;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, kase = 1;
    while (~scanf("%d", &n), n)
    {
        int No_c[1000] = {0}, C_LR[1000] = {0};
        char x[100];

        for (int i = 1; i <= n; i++)
        {
            scanf("%s", x);
            No_c[x[1] - '0'] = i;
        }
        char D[1000] = {0};
        scanf("%s", D);

        int Q;
        scanf("%d", &Q);
        char ans[1000] = {0};
        for (int qq = 0; qq < Q; qq++)
        {
            char q[1000] = {0};
            scanf("%s", q);
            int q_len = strlen(q), indx = 0;
            for (int i = 0; i < q_len; i++)
            {
                C_LR[No_c[i + 1]] = q[i] - '0';
            }
            for (int i = 1; i <= n; i++)
            {

                if (C_LR[i])
                {
                    indx = indx * 2 + 1;
                }
                else
                {
                    indx = indx * 2;
                }
            }

            sprintf(ans + qq, "%c", D[indx]);
        }
        printf("S-Tree #%d:\n", kase++);
        printf("%s", ans);
        printf("\n\n");
    }
    return 0;
}