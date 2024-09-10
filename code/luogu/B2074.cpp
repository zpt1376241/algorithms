#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int a=0,b=0,day=1;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        day*=a;
        day%=7;//因为相乘之后是7的倍数的那部分即使乘几也仍是7的倍数，所以直接边乘边模把那一部分模掉即可
    }
    if(day==1)cout<<"Monday";
    if(day==2)cout<<"Tuesday";
    if(day==3)cout<<"Wednesday";
    if(day==4)cout<<"Thursday";
    if(day==5)cout<<"Friday";
    if(day==6)cout<<"Saturday";
    if(day==0)cout<<"Sunday";    
}