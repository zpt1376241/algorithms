#include<bits/stdc++.h>
using namespace std;
int readint(){int n;scanf("%d",&n);return n;}
set<vector<int> >s;
vector<int> r1,r0;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int k;
        cin>>k;
        r1.clear();r0.resize(k);
        s.clear();
        for(int i=0;i<k;i++)    r1.push_back(readint());
        s.insert(r1);
        do
        {
            if(r1==r0){ cout<<"ZERO"<<endl; break;}
            int a=r1[0];
            for(int i=0;i<k;i++)
            {
                if(i==k-1)  r1[i]=abs(r1[i]-a);
                else r1[i]=abs(r1[i]-r1[i+1]);
            }
            if(s.count(r1)){ cout<<"LOOP"<<endl; break;}
            s.insert(r1);
        }while(1);
    }
}