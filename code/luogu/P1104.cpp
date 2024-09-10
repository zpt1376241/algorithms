#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct st
{
    char na[22];
    int y,m,d,num;
}s[101];
bool compare(st a1,st a2)
{
    if(a1.y<a2.y)   return 1;
    else if(a1.y>a2.y) return 0;
    else
    {
        if(a1.m<a2.m)   return 1;
        else if(a1.m>a2.m)  return 0;
        else
        {
            if(a1.d<a2.d)   return 1;
            else if(a1.d>a2.d)  return 0;
            else
            {
                if(a1.num>a2.num)   return 1;
                else    return 0;
            }
        }
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i].na;
        cin>>s[i].y>>s[i].m>>s[i].d;
        s[i].num=i;
    }
    sort(s+1,s+n+1,compare);
    for(int i=1;i<=n;i++)
        cout<<s[i].na<<endl;
}