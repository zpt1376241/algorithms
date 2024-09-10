#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    ll n;
    cin >> n;
    vector<int> a(n),vis(n),ans(n);
	for(int &x:a) cin>>x,x--;
	int s=0;
	for(int i=0;i < n;++i) if(!vis[i]) 
    {
		++ s;
		vector<int> st;
		int j = i;
		for( ;!vis[j];j = a[j])
        {
			st.push_back(j);
			vis[j] = s;
		}
		if(vis[j] != s) 
        {
			for(int i = st.size() - 1;i >= 0;--i) 
				ans[st[i]] = ans[a[st[i]]] + 1;			
		} 
        else 
        {
			int pos = find(st.begin(), st.end(), j) - st.begin();
			int cyc = st.size() - pos;
			for(int i = pos;i < (int) st.size();++i)
				ans[st[i]] = cyc;
			for(int i = pos - 1;i >= 0;--i) 
				ans[st[i]] = ans[a[st[i]]] + 1;
		}
	}
	ll res = 0;
	for(int i = 0;i < n;++i) 
		res += ans[i];
	cout << res << endl;;

    return 0;
}