#include<cstdio>
#include<iostream>
using namespace std;
int gcd(int x,int y)//最大公约数  辗转相除法
{
	int r=x%y;
	while(r!=0){
		x=y;
		y=r;
		r=x%y;
	}
	return y;
}
int a[4];
int main()
{
    cin>>a[1]>>a[2]>>a[3];
    for(int i=1;i<=2;i++)
        for(int j=1;j<=3-i;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
   // cout<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
    double x=1.0*a[1]/a[3];
    double y=1.0*a[2]/a[3];
    if(x<=y)
    {
        int temp=a[1];
        a[1]/=gcd(a[1],a[3]);
        a[3]/=gcd(temp,a[3]);
        cout<<a[1]<<"/"<<a[3]<<endl;;
    }
    else
    {
        int temp=a[2];
        a[2]/=gcd(a[2],a[3]);
        a[3]/=gcd(temp,a[3]);
        cout<<a[2]<<"/"<<a[3]<<endl;;
    }
}