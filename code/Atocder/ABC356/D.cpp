#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=998244353;
ll f(ll j,ll n)//计算在从1到n的数字中,二进制表示中第j位为1的数字的个数
{
    ll p=(1ll<<j);  //2的j次幂
    ll k=n/(2*p);   //1到n范围内，包含2^j个块的数量
    ll sum=k*p;     //每个完整块中，有一半的数字（即p个）第j位为1。
    //因为每个块长度为2*p,所以有k个完整块,每个块中p个数第j位为1,总共有k*p个数字

    //计算n在划分中的余数部分。
    //如果余数部分大于等于p,说明在这段余数中仍有一部分数字的第j位为1,需要额外加上这些数字的个数
    ll l=n%(1ll<<(j+1));
    if(l>=p)    sum+=l-p+1;
	
    return sum;
}
int main()
{
    ll n,m,t=0;
    cin>>n>>m;
    ll ans=0;
    for(int i=0;i<60;i++)
    {
        if(m&(1ll<<i))
        {
            ans+=f(i,n);
            ans%=mod;
        }
    }
    cout<<ans<<endl;
}