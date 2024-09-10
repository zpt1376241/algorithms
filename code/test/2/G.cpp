#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int x = 100 - a;
    printf("$20 bills: %d\n",x/20);
    x %= 20;
    printf("$10 bills: %d\n",x/10);
    x %= 10;
    printf(" $5 bills: %d\n",x/5);
    x %= 5;
    printf(" $1 bills: %d\n",x);
    return 0;
}
