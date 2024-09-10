#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, num = 0, ok[21];
        for (int i = 0; i < 21; i++)
            ok[i] = 0;
        bool win = true;
        string s;
        cin >> n >> k >> s;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                num++;
        int temp = num;
        if (num == 0)
        {
            for (int i = 0; i < k; i++)
                cout << 0;
            cout << endl;
            continue;
        }
        while (temp != 0)
        {
            int x = 0;
            temp++;
            num++;
            while (1)
            {
                if (pow(2, x) > temp)
                    break;
                else
                    x++;
            }
            temp = temp - pow(2, x - 1);
            ok[x - 1]++;
            if (ok[x - 1] > 1 || num > pow(2, k) - 1 || (ok[0] == 1 && temp != 0))
            {
                win = false;
                cout << "None" << endl;
                break;
            }
        }
        //        cout<<num<<endl;
        if (win)
        {
            for (int i = k - 1; i >= 0; i--)
                cout << ok[i];
            cout << endl;
        }
    }
}