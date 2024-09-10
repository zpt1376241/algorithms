#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    int N;
    cin>>N;
    while(N--)
    {
        int n,m;
        cin>>n>>m;
        cout<<m<<' '<<ceil(1.0*m/(n-m+1))<<endl;
    }
}

