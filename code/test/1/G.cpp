#include <stdio.h>
#include <math.h>
int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.4lf", b / a * 100);
    printf("%%");
}