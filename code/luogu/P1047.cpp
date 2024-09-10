#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int l,m,v,u,count=0;
    cin>>l>>m;
    int a[l+1];
    memset(a,0,sizeof(a));
    for(int i=1;i<=m;i++){
        cin>>u>>v;
        for( ;u<=v;u++){
            a[u]=1;
        }
    }
    for(int i=1;i<=l;i++){
        if(a[i]==1){
            count+=a[i];
        }
    }
    count--;
    count=l-count;
    cout<<count;
}