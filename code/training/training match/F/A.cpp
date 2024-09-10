#include <iostream>
using namespace std;

const int MAX = 1e6 + 10;

void solve()
{
    int n;
    string s, t;
    cin >> n >> s >> t;
    string a;
    int cnt = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == t[i])
        {
            a.push_back('0');
        }
        else
        {
            a.push_back('1');
        }
    }
    bool flag1 = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            if (flag1)
            {
                cnt++;
            }
            flag1 = 0;
        }
        else if (a[i] == '0')
            flag1 = 1;
    }
    cout<<"cnt: "<<cnt<<endl;
    if (cnt == 1)
    {
        int cnt1 = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '1')
                cnt1++;
        }
        cout << cnt1 << endl;
        return;
    }
    else if (cnt == 2)
    {
        cout << 6 << endl;
        return;
    }
    else
    {
        cout << 0 << endl;
        return;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}