#include<bits/stdc++.h>
using namespace std;
int k,n,a[1000005];
int main()
{
    cin>>k;
    while(k--)
    {
        cin>>n;
        for(int i=0;i<n;i++)    scanf("%d",&a[i]);
        set<int> s;
        int l=0,r=0,ans=0;
        while(r<n)
        {
            while(r<n&&!s.count(a[r]))  s.insert(a[r++]);
            ans=max(ans,r-l);
            s.erase(a[l++]);
        }
        cout<<ans<<endl;
    }
}