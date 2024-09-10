#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int k,ans=0;
        cin>>k;
        while(k)
        {
            ans+=k&1;
            k>>=1;
        }
        cout<<ans<<' ';
    }
}