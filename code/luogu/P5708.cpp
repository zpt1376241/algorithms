#include <cstdio>
#include <cmath>
int main()
{
    double a,b,c,p,s;
    scanf("%lf %lf %lf",&a,&b,&c);
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1lf",s);
    
    return 0;
}