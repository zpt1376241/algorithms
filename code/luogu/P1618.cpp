#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int m[10];
int a,b,c;
int x,y,z;
int flag;
int f()
{
    m[1]=x%10;m[2]=y%10;m[3]=z%10;
    m[4]=x/10%10;m[5]=y/10%10;m[6]=z/10%10;
    m[7]=x/100;m[8]=y/100;m[9]=z/100;
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(m[j]==i) break;
            if(j==9)    return 0;
        }
    }
    return 1;
}
int main()
{
    cin>>a>>b>>c;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=9;j++)
        {
            for(int k=1;k<=9;k++)
            {
                if((k!=i&&k!=j)&&j!=i)
                {
                    x=k+j*10+i*100;
                    y=1.0*x*b/a;
                    z=1.0*x*c/a;
                    if(z<1000)
                    {
                        if(f()==1)
                        {
                            cout<<x<<" "<<y<<" "<<z<<endl;
                            flag=1;
                            memset(m,0,sizeof(m));
                        }
                    }
                }
            }
        }
    }
    if(flag==0) cout<<"No!!!";
}