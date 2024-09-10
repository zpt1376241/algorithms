// #include <cstdio>
// #include <iostream>
// #include <cstring>
// using namespace std;
// void beford(string in, string after)
// {
//     if (in.size() > 0)
//     {
//         char ch = after[after.size() - 1];
//         cout << ch; // ’“∏˘ ‰≥ˆ
//         int k = in.find(ch);
//         beford(in.substr(0, k), after.substr(0, k));
//         beford(in.substr(k + 1), after.substr(k, in.size() - k - 1)); // µ›πÈ◊Û”“◊” ˜£ª
//     }
// }
// int main()
// {
//     string inord, aftord;
//     cin >> inord;
//     cin >> aftord; // ∂¡»Î
//     beford(inord, aftord);
//     cout << endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
string s1, s2;
// int find(char ch)
// {
//     for (int i = 0; i < s1.length();i++)
//         if(s1[i]==ch)
//             return i;
// }
void dfs(int l1,int r1,int l2,int r2)
{
    int m = s1.find(s2[r2]); // find(s2[r2]);
    cout << s2[r2];
    if(m>l1)
        dfs(l1, m - 1, l2, r2 - r1 + m - 1);
    if(m<r1)
        dfs(m + 1, r1, l2 + m - l1, r2 - 1);
}
void solve()
{
    cin >> s1 >> s2;
    dfs(0, s1.length() - 1, 0, s2.length() - 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    //cin >> T;
    while(T--)
    {
        solve();
    }
}