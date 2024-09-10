#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    double s,v;
    int mm=24*60+8*60;
    cin>>s>>v;
    int m,m1,h;
    m1=ceil(s/v+10);
    mm=mm-m1;
    if(mm>=24*60){
        mm-=24*60;
    }
    h=mm/60;
    m=mm%60;
    printf("%02d:%02d",h,m);
}