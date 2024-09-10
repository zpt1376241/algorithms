#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a[4];
    while(scanf("%d %d %d",&a[1],&a[2],&a[3])!=EOF)
    {
        for(int i=1;i<=2;i++)
            for(int j=1;j<=3-i;j++)
                if(a[j]<a[j+1])
                    swap(a[j],a[j+1]);
        if(a[1]-a[3]>=a[2]||a[2]+a[3]<=a[1])
        {
            cout<<"Not triangle"<<endl;
            continue;
        }
        if(a[2]*a[2]+a[3]*a[3]==a[1]*a[1])
            cout<<"Right triangle"<<endl;
        if(a[2]*a[2]+a[3]*a[3]<a[1]*a[1])
            cout<<"Obtuse triangle"<<endl;
        if(a[2]*a[2]+a[3]*a[3]>a[1]*a[1])
            cout<<"Acute triangle"<<endl;
        if(a[2]==a[3]||a[1]==a[2]||a[1]==a[3])
            cout<<"Isosceles triangle"<<endl;
        if(a[1]==a[2]&&a[1]==a[3])
            cout<<"Equilateral triangle"<<endl;
            
    }
}