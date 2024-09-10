#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N=100010;
int r[N],l[N];

void link(int l_,int r_)
{
    r[l_]=r_;    l[r_]=l_;
}
int main()
{
    int n,m;
    int _case=0;
    while(cin>>n>>m)
    {
        for(int i=1;i<=n;i++)
        {
            r[i]=(i+1)%(n+1);
            l[i]=i-1;
        }
        r[0]=1; l[0]=n;

        int k,x,y;
        bool flag=false;

        while(m--)
        {
            cin>>k;
            if(k==4)    flag=!flag;
            else
            {
                cin>>x>>y;
                if(k==3&&r[y]==x)    swap(x,y);
                if(k!=3&&flag)  k=3-k;
                if(k==1&&x==l[y])   continue;
                if(k==2&&x==r[y])   continue;

                int lx=l[x],rx=r[x],ly=l[y],ry=r[y];
                if(k==1)
                {
                    link(lx,rx);
                    link(ly,x);
                    link(x,y);
                }
                else if(k==2)
                {
                    link(lx,rx);
                    link(y,x);
                    link(x,ry);
                }
                else if(k==3)
                {
                    if(r[x]==y)
                    {
                        link(lx,y); link(y,x);  link(x,ry);
                    }
                    else 
                    {
                        link(lx,y); link(y,rx); link(ly,x); link(x,ry);
                    }
                }
            }
        }
        ll ans=0;
        int temp=0;
        for(int i=1;i<=n;i++)
        {
            temp=r[temp];
            if(i%2==1)  ans+=temp;
        }
        if(flag&&n%2==0)   ans=(ll)n*(n+1)/2-ans;
        cout<<"Case "<<++_case<<": "<<ans<<endl;
    }
}