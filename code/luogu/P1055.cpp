#include<cstdio>
#include<iostream>
using namespace std;
int flag,sum;
char a[20],mod[20]="0123456789X";
int main()
{
    gets(a);
    for(int i=0,j=1;i<=11;i++)
    {
        if(a[i]!='-')
        {
            sum+=(a[i]-'0')*j++;
        }
        else
        {
            continue;
        }
    }
    if(mod[sum%11]==a[12])  cout<<"Right"<<endl;
    else
    {
        a[12]=mod[sum%11];
        cout<<a<<endl;
    }

}