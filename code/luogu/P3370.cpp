#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull a[10010];
char s[10010];
ull BKDRHash(char *s)
{
    ull P = 131, H = 0;     //P=31、131、1313、13131、131313
    int n = strlen(s);
    for (int i = 0; i < n; i++)
        H = H * P + s[i] - 'a' + 1;     // H=H*p+s[i]
    return H;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        a[i] = BKDRHash(s);
    }
    int ans = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        if (a[i] != a[i + 1])
            ans++;
    cout << ans << endl;
}