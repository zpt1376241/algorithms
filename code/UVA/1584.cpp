#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char s[1001],m[1001],temp[1001];
int main()
{
    int n,j,i,k,p;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        memset(temp,0,sizeof(temp));memset(m,0,sizeof(m));
        strcpy(temp,s);
        for(j=1;j<strlen(s);j++)
        {
            for(k=j,p=0;s[k]!='\0';k++,p++)
            {
                m[p]=s[k];m[p+1]='\0';
            }
            strncat(m,s,j);
            if(strcmp(m,temp)<=-1)
                strcpy(temp,m);    
        }
        cout<<temp<<endl;
    }
}
