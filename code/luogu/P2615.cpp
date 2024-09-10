#include<bits/stdc++.h>
using namespace std;
int a[40][40];
int main()
{
    int n,x,y;
    cin>>n;
    a[1][(n+1)/2]=1;
    x=1,y=(n+1)/2;
    for(int i=2;i<=n*n;i++){
        if(x==1&&y!=n){
            x=n;y+=1;
        }else if(x!=1&&y==n){
            x--;y=1;
        }else if(x==1&&y==n){
            x++;
        }else if(x!=1&&y!=n){
            if(a[x-1][y+1]==0){
                x--;y++;
            }else{
                x++;
            }
        }
        a[x][y]=i;
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            cout<<a[i][j];
            if(j!=n){
                cout<<" ";
            }else{
                cout<<endl;
            }
        }
}