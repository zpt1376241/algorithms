#include <bits/stdc++.h>
using namespace std;

// 最大公因数
int gcd(int a, int b)
{
    int r;
    // 当a不能被b整除完全时
    // 令a=b b=a%b
    // 重复循坏 直到a%b==0
    // 返回b b就是最大公因数
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return b;

    // return __gcd(a, b); // C++11标准库函数

    // 若 r 是 a ÷ b 的余数，且r不为0， 则gcd(a, b) = gcd(b, r)
    return a % b == 0 ? b : gcd(b, a % b);
}

// 最小公倍数
int lcm(int a, int b) { return a * b / gcd(a, b); }