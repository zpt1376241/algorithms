#include<bits/stdc++.h>
using namespace std;
int dcmp(double x)
{
  if(fabs(x)<1e-7)
    return 0;
  return x<0?-1:1;
}
class Point
{
public:
    int x,y;
    Point(double a=0,double b=0):x(a),y(b){}
    bool operator<(const Point &rhs) const {
    if(dcmp(x-rhs.x)!=0)
      return dcmp(x-rhs.x)<0;
    return dcmp(y-rhs.y)<0;
  }
};
Point p[1050];
set<Point> k;
int main()
{
    int n,m;
    cin>>n;
    while(n--)
    {
        int flag=0;
        cin>>m;
        double sum_x=0;
        for(int i=1;i<=m;i++)
        {
            Point &q=p[i];
            scanf("%d %d",&q.x,&q.y);
            sum_x+=q.x;
            k.insert(q);
        }
        sum_x/=m;
        for(int i=1;i<=m;i++)
        {
            Point &q=p[i];
            double s=2*sum_x-q.x;
            Point p2(s,q.y);
            if(!k.count(p2))
            {
                flag=1;
                break;
            } 
        }
        if(flag)    cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}