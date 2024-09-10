#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,num=0;
    cin>>n;
    int a[n+1][4],b[n+1];
    for(int i=1;i<=n;i++){
        for(int q=1;q<=3;q++){
            cin>>a[i][q];
        }
        b[i]=a[i][1]+a[i][2]+a[i][3];
    }
    for(int i=1;i<n;i++){
        for(int k=i+1;k<=n;k++){
            int m=0;
            for(int p=1;p<=3;p++){
                if(abs(a[i][p]-a[k][p])<6){
                    m++;
                }
            }
            if(m==3&&abs(b[i]-b[k])<11) num++;
        }  
    }
    printf("%d",num);
}