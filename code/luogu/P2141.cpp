#include<cstdio>
#include<iostream>
using namespace std;
int a[100];
int main()
{
    int n,num=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        int p=0;
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if(j==k||i==j||i==k){
                    continue;
                }
                if(a[i]==a[k]+a[j]){
                num++;
                p=1;
                break;
                }
            }
            if(p==1){
                break;
            }
        }
    }
    cout<<num;
}