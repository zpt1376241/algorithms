#include<bits/stdc++.h>
using namespace std;
#define N 100010
int head,e[N],r[N],idx;
void init()
{
    head=-1;
    idx=0;
}
void add_to_head(int x)
{
    e[idx]=x;   r[idx]=head;   
    head=idx;   idx++;
}
void remove(int x)
{
    r[x]=r[r[x]];
}
void remove()
{
    head=r[head];
}
void add_x(int k, int x)
{
    e[idx]=x;   r[idx]=r[k];
    r[k]=idx;   idx++;
}
int main()
{
    init();
    int n;
    cin>>n;
    char c;
    int k,x;
    while(n--)
    {
        cin>>c;
        if(c=='H')
        {
            cin>>x;
            add_to_head(x);
        }
        else if(c=='D')
        {
            cin>>k;
            if(k==0)
            {
                remove();
                continue;
            }
            remove(k-1);
        }
        else
        {
            cin>>k>>x;
            add_x(k-1,x);
        }
    }
    for(int i=head;i!=-1;i=r[i])
    {
        cout<<e[i]<<' ';
    }
}