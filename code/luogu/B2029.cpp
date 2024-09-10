#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    const double PI=3.14;
    int h,r,num;
    cin>>h>>r;
    double v;
    v=PI*r*r*h;
    num=ceil(2e4/v);
    cout<<num;


}