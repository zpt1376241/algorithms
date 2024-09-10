#include<bits/stdc++.h>
using namespace std;
const int N=100010;
struct  S
{
    int a,b;
    S(int x=0,int y=0):a(x),b(y){}
}s[N];
stack<S> p;
int main()
{
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    while(n--)
    {
        char c;     cin>>c;
        int k=c-'A';
        cin>>s[k].a>>s[k].b;
    }
    string st;
    while(cin>>st)
    {
        bool err=false;
        int ans=0;
        for(int i=0;i<st.length();i++)
        {
            if(isalpha(st[i]))  p.push(s[st[i]-'A']);
            else if(st[i]==')') 
            {
                S aa=p.top();    p.pop();
                S bb=p.top();    p.pop();
                if(aa.a!=bb.b)  {  err=true;    break;     }
                ans+=bb.a*bb.b*aa.b;
                p.push(S(bb.a, aa.b));
            }
        }
        if(err)     cout<<"error"<<endl;
        else    cout<<ans<<endl;
    }
}