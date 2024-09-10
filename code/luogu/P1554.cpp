#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
#define ull unsigned long long
ull a[500001];
int main()
{
    ull n,m;
    cin>>m>>n;
    for(ull i=n;i<=m;i++){
        a[i]=i;
    }
    ull b[10];
    memset(b,0,sizeof(b));
    for(ull i=m;i<=n;i++){
        ull t=i;
        while(t!=0){
            if(t>9) b[t%10]++;
            else if(t<=9)    b[t]++;
            t/=10;
        }
    }
    cout<<b[0];
    for(ull i=1;i<=9;i++){
        cout<<" "<<b[i];
    }
}