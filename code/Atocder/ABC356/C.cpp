#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int> > key(m,vector<int>(n,0));
    char r[m+1]={};
    for(int i=0;i<m;i++)
    {
        int c;
        cin>>c;
        for(int j=0;j<c;j++)
        {
            int p;
            cin>>p;
            key[i][p-1]=1;
        }
        cin>>r[i];
    }
    int ans=0;
    for(int i=0;i<(1<<n);i++)   //Î»Ã¶¾Ù
    {
        vector<int> tf(n);
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))    tf[j]=1;
            else    tf[j]=0;
        }
        bool jud=true;
        for(int j=0;j<m;j++)
        {
            int ck=0;
            for(int p=0;p<n;p++)
                if(key[j][p]==1&&tf[p]==1)  ck++;
            if(ck>=k&&r[j]=='x')    jud=false;
            if(ck<k&&r[j]=='o') jud=false;
        }
        if(jud) ans++;
    }
    cout<<ans<<endl;
}