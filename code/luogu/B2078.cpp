#include<cstdio>
#include<iostream>
#define ull unsigned long long
using namespace std;
int main()
{
    ull m,k,t,num=0;
    cin>>m>>k;
    while(m>9){
        t=m%10;
        m/=10;
        if(t==3)    num++;    
    }
    if(m==3){
        num++;
    }
    if(num==k)  cout<<"YES";
    else    cout<<"NO";
}