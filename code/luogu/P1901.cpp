#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> h(n + 1), v(n + 1), ans(n + 1);
    stack<int> st;
    for (int i = 1; i <= n; i++)
        cin >> h[i] >> v[i];
    for (int i = 1; i <= n; i++)
    {
        while (!st.empty() && h[st.top()] < h[i])
        {
            ans[i] += v[st.top()];
            st.pop();
        }
        if(!st.empty())
            ans[st.top()] += v[i];
        st.push(i);
    }
    cout << *max_element(ans.begin() + 1, ans.end()) << endl;
}