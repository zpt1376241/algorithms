#include <stdio.h>
#include <math.h>
int main()
{
    char a, b, c;
    scanf("%c%c%c", &a, &b, &c);
    printf("%03d %03o %03x\n", a, a, a);
    printf("%03d %03o %03x\n", b, b, b);
    printf("%03d %03o %03x\n", c, c, c);
}