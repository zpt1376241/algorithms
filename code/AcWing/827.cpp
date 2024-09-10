#include<bits/stdc++.h>
using namespace std;
#define N 100010
int e[N],r[N],l[N],idx;
void init()
{
    r[0]=1; l[1]=0;
    idx=2;
}
void remove(int k)
{
    l[r[k]]=l[k];
    r[l[k]]=r[k];
}
void add_k_x(int k, int x)
{
    e[idx]=x;
    r[idx]=r[k];
    l[idx]=k;
    l[r[k]]=idx;
    r[k]=idx;
    idx++;
}
int main()
{
    int n;
    string  c;
    int x,k;

    init();

    cin>>n;
    while(n--)
    {
        cin>>c;
        if(c=="L")
        {
            cin>>x;
            add_k_x(0,x);
        } 
        else if(c=="R")
        {
            cin>>x;
            add_k_x(l[1],x);
        }
        else if(c=="D")
        {
            cin>>k;
            remove(k+1);
        }
        else if(c=="IL")
        {
            cin>>k>>x;
            add_k_x(l[k+1],x);
        }
        else if(c=="IR")
        {
            cin>>k>>x;
            add_k_x(k+1,x);
        }
    }
    for(int i=r[0];i!=1;i=r[i])
        cout<<e[i]<<' ';
}