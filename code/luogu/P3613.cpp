#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,q,t,i,j,k;
    cin>>n>>q;
    vector< vector<int> >a(n+1);
    while(q--)
    {
        cin>>t;
        if(t==1)
        {
            cin>>i>>j>>k;
            if(a[i].size()<j+1)
                a[i].resize(j+1);
            a[i][j]=k;
        }
        else
        {
            cin>>i>>j;
            cout<<a[i][j]<<endl;
        }
    }
}