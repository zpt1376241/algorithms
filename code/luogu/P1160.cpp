#include<iostream>
using namespace std;
class node
{
    public:
    int pre,nxt,key;
    node(int _key=0,int _pre=0,int _nxt=0){pre=_pre;nxt=_nxt;key=_key;}
};
node s[100001];
int n,m,tot,idx[100001];
void ins_back(int x,int y)
{
    int now=idx[x];
    s[++tot]=node(y,now,s[now].nxt);
    s[s[now].nxt].pre=tot;
    s[now].nxt=tot;
    idx[y]=tot;
}
void ins_front(int x,int y)
{
    int now=idx[x];
    s[++tot]=node(y,s[now].pre,now);
    s[s[now].pre].nxt=tot;
    s[now].pre=tot;
    idx[y]=tot;
}
void del(int x)
{
    int now=idx[x];
    int le=s[now].pre,rt=s[now].nxt;
    s[le].nxt=rt;
    s[rt].pre=le;
    idx[x]=0;
}
int main()
{
    s[0]=node();
    int x,k,p,now;
    cin>>n;
    ins_back(0,1);
    for(int i=2;i<=n;i++)
    {
        cin>>k>>p;
        p?ins_back(k,i):ins_front(k,i);
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>x;
        if(idx[x])  del(x);
    }
    now=s[0].nxt;
    while(now)
    {
        cout<<s[now].key<<' ';
        now=s[now].nxt;
    }
    return 0;
}