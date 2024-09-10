#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0;
    char a[100]={};
    while(cin>>n&&n)
    {
        int flag=0;
        if(t++) cout<<endl;
        for(int i=1234; ; i++)
        {
            int j=i*n;
            sprintf(a,"%05d%05d",j,i);
            if(strlen(a)>10)    break;
            sort(a,a+10);
            int f=1;
            for(int i=0;i<=9;i++)
            {
                if(i==a[i]-'0') continue;
                else    {f=0;break;}
            }
            if(f)
            {
                ++flag;
                cout<<setw(5)<<setfill('0')<<j<<" "<<"/"<<" "<<setw(5)<<setfill('0')<<i<<" "<<"="<<" "<<n<<endl;
            }
        }
        if(!flag)   cout<<"There are no solutions for "<<n<<"."<<endl;
    }
}