#include<bits/stdc++.h>
using namespace std;
queue<int> s;
int main()
{
    int n,k,t,sum=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        s.push(t);
    }
    int ans=0;
    while(!s.empty())
    {
        if(sum+s.front()<=k)
        {
            sum+=s.front();
            s.pop();
        }
        else
        {
            sum=0;
            ans++;
            sum+=s.front();
            s.pop();
        }
    }
    cout<<++ans<<endl;
}