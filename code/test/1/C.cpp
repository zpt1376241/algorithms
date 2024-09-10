#include <stdio.h>
int main()
{
    double b,a;
    scanf("%lf,%lf", &b, &a);
    printf("%d,%d\n", (int)b / (int)a, (int)b % (int)a);
    printf("%.2lf", b / a);
}