#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int sum=0,m,n;
    cin>>m>>n;
    for(int i=m;i<=n;i++){
        if(i%2==1){
            sum+=i;
        }
    }
    cout<<sum;
}