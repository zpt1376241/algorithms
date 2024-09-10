//#define DZY
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
char a[500],b[500];
int cnt1[50],cnt2[50];
int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}
int main()
{
    #ifdef DZY
    freopen("C:/test/in.txt","r",stdin);
    freopen("C:/test/out.txt","w",stdout);
    #endif
    while(scanf("%s",a)!=EOF)
    {
        scanf("%s",b);
        for(int i=0;i<strlen(a);i++)
            cnt1[a[i]-'A']++;
        for(int i=0;i<strlen(b);i++)
            cnt2[b[i]-'A']++;
        qsort(cnt1,50,sizeof(int),cmp);
        qsort(cnt2,50,sizeof(int),cmp);
        int flag=0;
        for(int i=0;i<50;i++)
        {
            if(cnt1[i]!=cnt2[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<"NO"<<endl;
        else    cout<<"YES"<<endl;
        memset(a,0,sizeof(a));memset(b,0,sizeof(b));
        memset(cnt1,0,sizeof(cnt1));memset(cnt2,0,sizeof(cnt2));
    }
}