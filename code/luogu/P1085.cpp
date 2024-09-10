#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int  a=0,b=0,p=a+b;
    int s1=0,s3=0;
    for(int i=1;i<=7;i++){
    cin>>a>>b;
    if(a+b>8){
        if(a+b>p){
            s3=i;
            p=a+b;
        }
    }else{
        s1++;
    }
    }
    if(s1==7){
        cout<<0;
    }else{
        cout<<s3;
    }
}