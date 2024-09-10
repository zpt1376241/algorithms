#include <bits/stdc++.h>
#define sz(a) a.size()
#define ll long long
using namespace std;
vector<vector<int> > pis;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        double x1, x2, y1, y2, xr, yr, xx, yy;
        cin >> x1 >> y1 >> x2 >> y2;
        xr = (x1 + x2) / 2;
        yr = (y1 + y2) / 2;
        //        cout<<xr<<' '<<yr<<' ';
        cin >> x1 >> y1 >> x2 >> y2;
        xx = (x1 + x2) / 2;
        yy = (y1 + y2) / 2;
        double r2 = ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) / 4.0;
        int cx, cy;
        if (xr < xx)
            cx = -1;
        else
            cx = 1;
        if (yr < yy)
            cy = -1;
        else
            cy = 1;
        double x = xx + cx * sqrt(r2 / 2), y = yy + cy * sqrt(r2 / 2);
        printf("%.10llf", fabs(x - xr) + fabs(y - yr));
    }
}