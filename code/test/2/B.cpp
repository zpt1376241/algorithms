#include <stdio.h>
const double PI = 3.14;
int main()
{
    int x, y;
    scanf("x = %d, y = %d", &x, &y);
    printf("x + y : %d\n", x + y);
    printf("x - y : %d\n", x - y);
    printf("x * y : %d\n", x * y);
    printf("x / y quotient: %d, remainder: %d\n", x / y, x % y);
    printf("x ^ 2 : %d\n", x * x);
    printf("y ^ 3 : %d\n", y * y * y);
    return 0;
}
