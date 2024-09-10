#include <iostream>
#include<queue>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e6 + 5;
const ll mod = 998244353;
queue<int> x;
bool vis[maxn];
int step[maxn];
int bfs(int n,int k)
{
    int head, next;
    x.push(n);
    vis[n] = true;
    step[n] = 0;
    while(!x.empty())
    {
    	head=x.front();
		x.pop();
		for(int i=1;i<=3;i++)
		{
			if(i==1)	next=head-1;
			else if(i==2)	next=head+1;
			else	next=head*2;
			if(next>maxn||next<0)	continue;
			if(!vis[next])
			{
				vis[next]=true;
				x.push(next);
				step[next]=step[head]+1;	
			}
			if(next==k)	return step[next];		
		} 
	}
    return 0;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    if(n>=k)
    {
        cout << n - k << endl;
        return;
    }
    else
    {
        cout << bfs(n, k) << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
