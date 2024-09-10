# include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> _pair;
int main()
{
    int n;
    map<_pair,int> a;
    while(cin>>n&&n)
    {
        bool ans=true;
        a.clear();
        for(int i=0;i<n;i++)
        {
            int p,q;
            scanf("%d %d",&p,&q);
            a[make_pair(p,q)]++;
        }
        for(const auto &p:a)
        {
            _pair d=make_pair(p.first.second,p.first.first);
            if(p.second!=a[d])
            {
                ans=false;
                break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;
    }
}