#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int isPrime(int a)
{
    if(a==1||a==0) return 0;
    else if(a==2) return 1;
    else{
        for(int i=2;i<=sqrt(a);i++){
        if(a%i==0)  return 0;
        }
    }
    return 1;
}
int main(){
    int b[26],maxn=0,minn=100;
    memset(b,0,sizeof(b));
    char a[100];
    memset(a,0,sizeof(a));
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
        b[a[i]-'a']++;
    }
    for(int i=0;i<26;i++){
            if(b[i]>maxn)  maxn=b[i];
            if(b[i]<minn&&b[i]!=0)   minn=b[i];
    }
    if(isPrime(maxn-minn)){
        printf("Lucky Word\n%d\n",maxn-minn);
    }else{
        printf("No Answer\n0\n");
    }
}