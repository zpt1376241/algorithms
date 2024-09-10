#include<cstdio>
#include<iostream>
using namespace std;
int f(int n)
{
    if(n<2||(n!=2&&n%2==0))
        return 0;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=(n-2)/2;i++)
    {
        for(int j=2;j<=2*i+2;j++)
        {
            if(f(j)&&f(2*i+2-j))
            {
                printf("%d=%d+%d\n",2*i+2,j,2*i+2-j);
                break;
            }
        }
    }
}