#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int max_val=1e6;
int b[max_val+5];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        b[t]++;
    }

    //前缀和，<=i的数字出现的次数
    for(int i=0;i<=max_val;i++)
        b[i+1]+=b[i];

    ll ans=0;
    for(int i=1;i<=max_val;i++)
    {
        int k=b[i]-b[i-1];   //差分，数字i，即Ai出现的次数
        for(int j=1;i*j<=max_val;j++)
        {
            ans+=(ll)k*(b[min(max_val,(j+1)*i-1)]-b[j*i-1])*j;
        }

        //i and i 计算了i*i次，实际只有i*(i-1)/2次
        ans-=(ll)k*(k+1)/2;
    }
    cout<<ans<<endl;
}