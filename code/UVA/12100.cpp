#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        deque<pair<int,int> > s;
        priority_queue<int> ss;
        int ans=0;
        int p,q;
        cin>>p>>q;
        for(int i=0;i<p;i++)
        {
            int m;
            cin>>m;
            s.push_back(make_pair(m,i));
            ss.push(m);
        }
        while(1)
        {
            int f=1;
            for(auto i:s)
            {
                if(i.first==ss.top())
                {
                    if(i.second==q){f=0;ans++;break;}
                    else{ans++;ss.pop();s.pop_front();}
                }
                else{s.push_back(s.front());s.pop_front();}
            }
            if(f==0)    break;
        }
        cout<<ans<<endl;
    }
}