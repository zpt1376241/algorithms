#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a[21][21][21];
    int x,y,z;
    cin>>x>>y>>z;
    for(int i=1;i<=x;i++)
        for(int j=1;j<=y;j++)
            for(int k=1;k<=z;k++)
                a[i][j][k]=1;
    int m;
    cin>>m;
    int x1,y1,z1,x2,y2,z2;
    for(int i=1;i<=m;i++){
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        for(int i=x1;i<=x2;i++)
            for(int j=y1;j<=y2;j++)
                for(int k=z1;k<=z2;k++)
                    a[i][j][k]=0;
    }
    int num=0;
    for(int i=1;i<=x;i++)
        for(int j=1;j<=y;j++)
            for(int k=1;k<=z;k++)
                num+=a[i][j][k];
    cout<<num;
    return 0;
}