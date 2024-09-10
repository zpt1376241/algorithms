#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int s[7][729][729];
int pw[7];
int main()
{
    int n;
    cin>>n;
    pw[0]=1;
    s[0][1][1]=1;
    for(int i=1;i<=n;i++)   pw[i]=3*pw[i-1];
    
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=3;j++)
            {
                for(int ii=1;ii<=pw[k-1];ii++)
                {
                    for(int jj=1;jj<=pw[k-1];jj++)
                    {
                        s[k][ii+pw[k-1]*(i-1)][jj+pw[k-1]*(j-1)]=(i==2&&j==2)?0:s[k-1][ii][jj];
                    }
                }
            }
        }
    }
    for(int i=1;i<=pw[n];i++)
    {
        for(int j=1;j<=pw[n];j++)
        {
            cout.put(".#"[s[n][i][j]]);//putchar(".#"[s[n][i][j]]);
        }
        puts("");
    }
}