#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    for(int i=1;i<=n;i++){
        a%=b;
        a*=10;//���ó�������
    }
    a/=b;
    cout<<a;
}