#include<cstdio>
#include<iostream>
using namespace std;
int i=1,num=1;
int f(int n)
{
    if(i!=n)
    {
        num=(num+1)*2;
        i++;
        return f(n);
    }
    if(i==n)    return num;
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n);
}