#include<bits/stdc++.h>
using namespace std;
string a[1005];
void print(const string& s, int len, char extra)
{
  cout << s;
  for(int i = 0; i < len-s.length(); i++)
    cout << extra;
}
int main()
{
    int n,m=0;
    while(cin>>n)
    {
        m=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m=max(m,(int)a[i].length());
        }
        sort(a,a+n);
        for(int i=1;i<=60;i++)  cout<<"-";
        cout<<endl;
        int p,q,count=0;//pÐÐqÁÐ
        q=(60-m)/(m+2)+1;
        p=(n-1)/q+1;
        for(int i=0;i<p;i++)
        {
            count=0;
            for(int j=0;j<q;j++)
            {
                int idx=j*p+i;
                if(idx<n) print(a[idx],j==q-1?m:m+2, ' ');
            }
            cout<<endl;
        }
    }
}