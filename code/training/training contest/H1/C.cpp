#include <bits/stdc++.h>
using namespace std;
#define int long long
int ans = 0, n, d, m;
vector<int> v;
set<int> st;
signed main()
{
    cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        v.push_back(m);
        st.insert(m);
    }
    set<int>::iterator it = st.begin();
    //    for(;it!=st.end();it++)cout<<*it<<' ';
    for (; it != st.end(); it++)
    {
        int l1 = *it, r1 = *it + d, r2 = *it, l2 = *it - d;
        int q, q1 = 0, q2 = 0;
        for (int i = 0; i < v.size() - 1; i++)
        {
            int x = v[i], y = v[i + 1];
            if (x < l1)
                x = l1;
            else if (x > r1)
                x = r1;
            if (y < l1)
                y = l1;
            else if (y > r1)
                y = r1;
            q1 += abs(x - y);
        }
        for (int i = 0; i < v.size() - 1; i++)
        {
            int x = v[i], y = v[i + 1];
            if (x < l2)
                x = l2;
            else if (x > r2)
                x = r2;
            if (y < l2)
                y = l2;
            else if (y > r2)
                y = r2;
            q2 += abs(x - y);
        }
        q = max(q1, q2);
        ans = max(ans, q);
    }
    cout << ans;
}