#include<bits/stdc++.h>
using namespace std;
map<double, string> mp;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string s;
    for (int i = 1; i <= n;i++)
    {
        double t;
        char ch;
        cin >> t >> ch;
        if(!mp.count(t))
        {
            s += "a";
            mp.insert(make_pair(t, s));
            cout << mp[t] << endl;
        }
        else
        {
            cout << mp[t] << endl;
        }
    }
}