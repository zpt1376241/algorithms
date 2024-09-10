#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.length(); )
    {
        for(int j=0;j<t.length(); )
        {
            if(s[i]==t[j])
            {
                cout<<j+1<<" ";
                j++;i++;
            }
            else
            {
                j++;
            }
        }
    }
}