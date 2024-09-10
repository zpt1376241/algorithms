// 快读快写

#include <bits/stdc++.h>
#define int long long
using namespace std;
inline int read()
{
    register int x = 0, f = 1;
    register char ch = getchar();
    while (!isdigit(ch))
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (isdigit(ch))
    {
        x = (x << 1) + (x << 3) + (ch ^ '0');
        // x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}

inline void write(int x)
{
    if (x < 0)
        putchar('-'), x = -x;
    if (x > 9)
        write(x / 10);
    putchar(x % 10 + '0');
    return;
}
