#include<bits/stdc++.h>
using namespace std;
int readint(){int n;scanf("%d",&n);return n;}
vector<int> a;
int main()
{
    int n,cnt=0;
    while(cin>>n)
    {
        a.clear();
        while(n--)  a.push_back(readint());
        long long ans=0;
        for(int i=0;i<a.size();i++)
        {
            long long s=1;
            for(int j=i;j<a.size();j++)
            {
                s*=a[j];
                if(s>ans)   ans=s;
            }
        }
        cout<<"Case #"<<++cnt<<": The maximum product is "<<ans<<"."<<endl;
        cout<<endl;
    }
}