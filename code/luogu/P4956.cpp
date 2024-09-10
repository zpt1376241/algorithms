#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,x,k,f=0;
    cin>>n;
    int t=n/52;
    for(k=1; ;k++)
    {
        for(x=100;x>=1;x--)
        {
            if(21*k+7*x==t)
            {
                cout<<x<<endl<<k<<endl;
                f=1;
                break;
            }
        }
        if(f==1)    break;
    }
}
//21k 7x