#include<bits/stdc++.h>
using namespace std;
const int N = 100;
int x[N], y[N], r[N];
double dist(int x1, int y1, int x2, int y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main()
{
    int n, x1, y1, x2, y2, ans=0;
    cin >> n;
    for (int i = 1; i <= n;i++)
        cin >> x[i];
    for (int i = 1; i <= n; i++)
        cin >> y[i];
    for (int i = 1; i <= n;i++)
        cin >> r[i];
    cin >> x1 >> y1 >> x2 >> y2;
    for (int i = 1; i <= n; i++)
    {
        if((dist(x1,y1,x[i],y[i])<r[i])^(dist(x2,y2,x[i],y[i])<r[i]))
            ans++;
    }
    cout << ans << endl;
}