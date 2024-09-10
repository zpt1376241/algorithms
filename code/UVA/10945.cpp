#include<bits/stdc++.h>
using namespace std;
int readint(){int n;scanf("%d",&n);return n;}
int main()
{
    int n;
    while(cin>>n&&n)
    {
        int ans=0,a,b,k=n;
        priority_queue<int ,vector<int> ,greater<int> > p;
        while(k--){p.push(readint());}
        for(int i=0;i<n-1;i++)
        {
            a=p.top();p.pop();
            b=p.top();p.pop();
            ans+=a+b;
            p.push(a+b);
        }
        cout<<ans<<endl;
    }
}