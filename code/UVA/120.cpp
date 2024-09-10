#include<bits/stdc++.h>
using namespace std;
int n,a[10001];
string s;
void f(int k)
{
    for(int i=0;i<k-i;i++)
        swap(a[i],a[k-i]);
    cout<<n-k<<' ';
}
int main()
{
    while(getline(cin,s))
    {
        cout<<s<<endl;
        stringstream ss(s);
        n=0;
        while(ss>>a[n]) n++;
        for(int i=n-1;i>0;i--)
        {
            int k=max_element(a,a+i+1)-a;
            if(k==i)    continue;
            if(k>0) f(k);
            f(i);
        }
        cout<<'0'<<endl;
    }
}