#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    double sum=0;
    double k;int n;
    cin>>k;
    for(double i=1;sum<=k;i++)
    {
        sum+=1/i;
        n=(int)(i);
    }
    cout<<n;
}