#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a[4];
    cin>>a[1]>>a[2]>>a[3];
    char x,y,z;
    cin>>x>>y>>z;
    for(int i=1;i<=2;i++)
        for(int j=1;j<=3-i;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
    cout<<a[x-'A'+1]<<" "<<a[y-'A'+1]<<" "<<a[z-'A'+1]<<endl;
}