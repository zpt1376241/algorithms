#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n;
struct pe
{
    string s;
    int len;
    int num;
}a[21];
bool compare(pe a1,pe a2)
{
    if(a1.len>a2.len)   return 1;
    if(a1.len==a2.len&&a1.s>a2.s)   return 1;
    return 0;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].s;
        a[i].len=a[i].s.length();
        a[i].num=i;
    }
    sort(a+1,a+n+1,compare);
    cout<<a[1].num<<endl<<a[1].s;
}