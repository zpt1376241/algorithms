#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num[8]={};
    int st[8],m[8];
    for(int i=1;i<=7;i++){
        cin>>st[i];
    }
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j<=7;j++){
            cin>>m[j];
            for(int k=1;k<=7;k++){
                if(m[j]==st[k]){
                    cnt++;
                }
            }
        }
        num[cnt]++;
    }
    cout<<num[7];
    for(int i=6;i>=1;i--){
        cout<<" "<<num[i];
    }
}