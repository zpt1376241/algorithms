#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
set<LL> ga;
const LL p[3]={2,3,5};
priority_queue<LL,vector<LL> ,greater<LL> > a;
int main()
{
    int x;
    ga.insert(1);
    a.push(1);
    for(int i=1; ;i++)
    {
        x=a.top();
        a.pop();
        if(i==1500)
        {
            cout<<"The 1500'th ugly number is "<<x<<"."<<endl;
            break;
        }
        for(int j=0;j<3;j++)
        {
            LL k=x*p[j];
            if(!ga.count(k))
            {
                ga.insert(k);
                a.push(k);
            }
        }
    }
}