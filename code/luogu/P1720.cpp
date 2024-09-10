#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double m;
    m=(pow((1+pow(5,0.5))/2,n)-pow((1-pow(5,0.5))/2,n))/pow(5,0.5);
    printf("%.2lf",m);
}
