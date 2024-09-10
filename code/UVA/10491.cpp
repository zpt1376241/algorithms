#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, c;
    while (scanf("%d %d %d", &n, &m, &c) != EOF)
    {
        double f;
        f = (double)(m * (n + m - 1)) / (double)((n + m) * (n + m - c - 1));
        printf("%.5lf\n", f);
    }
    return 0;
}