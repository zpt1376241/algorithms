#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
struct st
{
    int a,b,c;
    int sum;
    int num;
}s[301];
int n;
int comp(const st a1,const st a2)
{
    if(a1.sum>a2.sum)   return 1;
    else if(a1.sum<a2.sum)  return 0;
    else
    {
        if(a1.a>a2.a)   return 1;
        else if(a1.a<a2.a)  return 0;
        else
        {
            if(a1.num<a2.num)   return 1;
        }
    }
    return 0;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i].a>>s[i].b>>s[i].c;
        s[i].sum=s[i].a+s[i].b+s[i].c;
        s[i].num=i;
    }
    //qsort(s,n,sizeof(st),comp);
    sort(s+1,s+n+1,comp);
    for(int i=1;i<=5;i++)
        cout<<s[i].num<<" "<<s[i].sum<<endl;
}
