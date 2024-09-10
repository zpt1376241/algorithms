#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,num,ans0=0,ans1=1,temp=-1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>num;
        if(num==++temp)
            ans0++;
        else
        {
            if(ans0>ans1)   ans1=ans0;
            ans0=1;
        }
        temp=num;
    }
    if(ans0>ans1)   ans1=ans0;
    cout<<ans1;
}