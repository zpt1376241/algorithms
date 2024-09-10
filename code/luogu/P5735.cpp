#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
double ans(double a[3],double b[3])
{
    double arr1,arr2,arr3;
    arr1=sqrt((a[0]-a[1])*(a[0]-a[1])+(b[0]-b[1])*(b[0]-b[1]));
    arr2=sqrt((a[0]-a[2])*(a[0]-a[2])+(b[0]-b[2])*(b[0]-b[2]));
    arr3=sqrt((a[1]-a[2])*(a[1]-a[2])+(b[1]-b[2])*(b[1]-b[2]));
    return arr1+arr2+arr3;
}
int main()
{
    double a[3],b[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i]>>b[i];
    }
    printf("%.2f",ans(a,b));

}