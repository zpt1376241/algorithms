#include <bits/stdc++.h>
using namespace std;

// �������
int gcd(int a, int b)
{
    int r;
    // ��a���ܱ�b������ȫʱ
    // ��a=b b=a%b
    // �ظ�ѭ�� ֱ��a%b==0
    // ����b b�����������
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return b;

    // return __gcd(a, b); // C++11��׼�⺯��

    // �� r �� a �� b ����������r��Ϊ0�� ��gcd(a, b) = gcd(b, r)
    return a % b == 0 ? b : gcd(b, a % b);
}

// ��С������
int lcm(int a, int b) { return a * b / gcd(a, b); }