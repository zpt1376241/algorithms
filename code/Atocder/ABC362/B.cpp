#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a[4][3];
    int s[5];
    for(int i=1;i<=3;i++)
        for(int j=1;j<=2;j++)
            cin>>a[i][j];
    s[1]=pow(a[2][1]-a[1][1],2)+pow(a[2][2]-a[1][2],2);
    s[2]=pow(a[3][1]-a[1][1],2)+pow(a[3][2]-a[1][2],2);
    s[3]=pow(a[3][1]-a[2][1],2)+pow(a[3][2]-a[2][2],2);
    sort(s+1,s+4);
    if(s[1]+s[2]==s[3])  cout<<"Yes";
    else cout<<"No";

    return 0;
}