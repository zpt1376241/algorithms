#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,t;
    cin>>n>>t;
    vector<int> a(n+1),b(n+1);
    int c=0,d=0;
    for(int i=1;i<=t;i++)
    {
        int temp;
        cin>>temp;
        temp--;
        int line=temp/n;
        int row=temp%n;
        a[line]++;
        b[row]++;
        if(line==row)   c++;
        if(line+row==n-1)    d++;
        if(a[line]==n||b[row]==n||c==n||d==n)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    
    return 0;
}