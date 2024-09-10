#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int t=0,k,sum=0,flag=1;
    cin>>k;
    for(int i=1; ;i++)
    {
        for(int j=1;j<=i;j++)
        {
            sum+=i;
            t++;
            if(t==k)
            {
                flag=0;
                break;
            }
        }
        if(flag==0) break;
    }
    cout<<sum<<endl;
}