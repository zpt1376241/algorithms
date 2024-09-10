#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char a[15]={};
    while(cin>>a+1)
    {
        int i,j;
        for(i=7;i<=9;i++)
        {
            for(j=1;j<=6;j++)
                if(a[j]==a[i]&&a[7-j]==a[19-i])
                {
                    a[7-j]=a[19-i]='0';
                    break;
                }
            if(j==7) break;
        }
        if(i==10)
            cout<<"TRUE"<<endl;
        else
            cout<<"FALSE"<<endl;
    }
}
