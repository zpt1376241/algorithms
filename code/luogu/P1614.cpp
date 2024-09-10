#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int a[5000],b[5000];
int main()
{
    int n,m,min=50000;
    cin>>n>>m;
    memset(b,0,sizeof(b));
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n-m+1;i++){
        for(int j=i;j<m+i;j++){
            b[i]+=a[j];
        }
        if(b[i]<min)    min=b[i];
    }
    cout<<min;
}
