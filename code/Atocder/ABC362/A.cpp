#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a,b,c;
    string s;
    cin>>a>>b>>c>>s;
    if(s=="Red")    cout<<min(b,c);
    else if(s=="Green") cout<<min(a,c);
    else if(s=="Blue") cout<<min(a,b);

    return 0;
}