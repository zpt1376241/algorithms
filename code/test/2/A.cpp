#include <stdio.h>
const double PI = 3.14;
int main()
{
    double a;
    scanf("%lf", &a);
    printf("Area: %.6lf\n", PI * a * a);
    printf("Perimeter: %.6lf\n", 2 * PI * a);
    return 0;
}
