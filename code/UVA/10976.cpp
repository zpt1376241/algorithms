#include<bits/stdc++.h>
using namespace std;
vector<int> a,b;
int main()
{
    int n;
    while(cin>>n&&n)
    {
        a.clear();b.clear();
        for(int i=n+1;i<=2*n;i++)
        {
            if(n*i%(i-n)==0)
            {
                a.push_back(n*i/(i-n));
                b.push_back(i);
            }
        }
        cout<<a.size()<<endl;;
        for(int i=0;i<a.size();i++)
        {
            printf("1/%d = 1/%d + 1/%d\n",n,a[i],b[i]);
        }
    }
}