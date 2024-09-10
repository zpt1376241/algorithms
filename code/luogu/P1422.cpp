#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    double a,ans=0;
    cin>>a;
    if(a<150)
        ans=a*0.4463;
    else if(a>=150&&a<400)
        ans=150*0.4463+(a-150)*0.4663;
    else if(a>=400)
        ans=150*0.4463+250*0.4663+(a-400)*0.5663;
    printf("%.1lf\n",ans);
}