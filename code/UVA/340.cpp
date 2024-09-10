#include<cstdio>
#include<iostream>
using namespace std;
int s[10001],n[10001];
int main()
{
    int N,ans1,ans2,num=0,n1,n2,i,q,p,l,j;
    while(cin>>N){
        num++;
        if(N==0)    break;
        printf("Game %d:\n",num);
        for(p=1;p<=N;p++)   cin>>s[p];
        while(1){
            ans1=0;ans2=0;
            for(q=1;q<=N;q++)   cin>>n[q];
            if(n[1]==0) break;
            for(j=1;j<=N;j++){
                if(n[j]==s[j]) ans1++;
            }
            for(i=1;i<=9;i++){
                n1=0,n2=0;
                for(l=1;l<=N;l++){
                    if(s[l]==i) n1++;
                    if(n[l]==i) n2++;
                }
                if(n1>n2)   ans2+=n2;
                else    ans2+=n1;
            }
            ans2=ans2-ans1;
            printf("    (%d,%d)\n",ans1,ans2);
        }
    }
}