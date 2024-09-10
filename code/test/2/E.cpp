#include <stdio.h>
const double PI = 3.14;
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("%.2lf %.2lf %.2lf\n", x * a / 100, x * b / 100, x * c / 100);
    printf("%.2lf %.2lf %.2lf\n", x * 100 / a, x * 100 / b, x * 100 / c);
    return 0;
}
