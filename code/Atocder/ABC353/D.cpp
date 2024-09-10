#include <bits/stdc++.h>
using namespace std;
long long w(long long a)
{
	long long ans=0;
	while (a)
	{
		a=a/10;
		ans++;
	}
	return ans;
}
long long mod=998244353;
long long n,k,ans;
long long a[500010];
long long su[80];
long long ss[80];
long long p10[20];
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	cin>>n;
	p10[0]=1;
	for (long long i=1; i<=12; i++)
	  p10[i]=p10[i-1]*10%mod;
	for (long long i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	for (long long i=n; i>=1; i--)
	{
		for (long long p=1; p<=10; p++)
		{
			ans=(ans+su[p]*a[i]%mod*p10[p]%mod)%mod;
			ans=(ans+ss[p])%mod;
		}
		//cout<<i<<" "<<ans<<endl;
		long long ccf=w(a[i]);
		ss[ccf]=(ss[ccf]+a[i])%mod;			
		su[ccf]++;
	}
	cout<<ans%mod<<'\n';
	return 0;
}