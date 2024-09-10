#include<bits/stdc++.h>
#define Endl endl
using namespace std;
int a[10000005];
int t,n,m,sum=0;
void mul(int a[],int k)
{
	for(int i=1;i<a[0];i++)
	a[i]*=k;
	for(int i=1;i<a[0];i++)
	{
		if(a[i]>9)
		{
			a[i+1]+=a[i]/10;
			a[i]%=10;
		}
	}
	while(a[a[0]])
	{
		a[a[0]+1]+=a[a[0]]/10;
		a[a[0]]%=10;
		a[0]++;
	}
}
void check()
{
	for(int i=1;i<a[0];i++)
	{
		if(a[i]==m)
		sum++;
	}
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		memset(a,0,sizeof(a));
		sum=0;
		a[0]=1,a[1]=1;
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		mul(a,i);
		check();
		cout<<sum<<Endl;
	}
	return 0;
}