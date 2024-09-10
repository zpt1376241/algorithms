#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    double b;
    scanf("%d %lf", &a, &b);
    if(a>=0)
        printf("%d\n", a);
    else
        printf("%d\n", -a);
    printf("%g", fabs(b));
}