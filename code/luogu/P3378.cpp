#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 1e6 + 5;
const ll mod = 998244353;
int heap[maxn], len = 0;
void push(int x)
{
    heap[++len] = x;
    int i = len;
    while (i > 1 && heap[i] < heap[i / 2])
    {
        swap(heap[i], heap[i / 2]);
        i /= 2;
    }
}
void pop()
{
    heap[1] = heap[len--];
    int i = 1;
    while (2 * i <= len)
    {
        int son = 2 * i;
        if (son < len && heap[son + 1] < heap[son])
            son++;
        if (heap[son] < heap[i])
        {
            swap(heap[i], heap[son]);
            i = son;
        }
        else
        {
            break;
        }
    }
}
void solve()
{
    int op;
    cin >> op;
    if (op == 1)
    {
        int t;
        cin >> t;
        push(t);
    }
    else if (op == 2)
        cout << heap[1] << endl;
    else if (op == 3)
        pop();
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}