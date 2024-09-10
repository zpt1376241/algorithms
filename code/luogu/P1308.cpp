#include<cstdio>
#include<iostream>
#include<cstring>
#include<ctype.h>
using namespace std;
int i,s1,n=0,j,ss=0,k,rec;
char s[11],m[1000001];
void strlow(char *s)
{
    for(int i=0;s[i];i++){
        if(isupper(s[i]))   s[i]=tolower(s[i]);
    }
}
int main()
{
    cin>>s;
    cin>>m;
    strcat(s," ");strcat(m," ");
    strlow(s);strlow(m);
    for(i=0;m[i]!='\0';i++){
        if(m[i]==' '){
            s1=1;
        }for(j=n,k=0;s[i]!='\0';j++,k++){
            if(m[i]==s[k]){
                s1*=1;
            }else{
                s1*=0;
            }
        }
        if(s1==0){
            ss++;
        }
        if(ss==1&&s1==1){
            rec=n;
        }
        n=i;
        n++;
    }
    if(ss==0){
        ss=-1;
        cout<<ss;
    }else if(ss>=1){
        cout<<ss<<rec;
    }
}