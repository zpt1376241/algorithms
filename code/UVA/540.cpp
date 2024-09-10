#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    while(cin>>n&&n)
    {
        map<int ,int> a;//存储成员属于哪个团队
        cout<<"Scenario #"<<++cnt<<endl;
        for(int i=1;i<=n;i++)
        {
            int t,k;  cin>>t;
            for(int j=1;j<=t;j++)
            {
                cin>>k; a[k]=i;
            }
        }
        queue<int> p,q[1050];//p存储团队的队列,q存储各个团队的成员的队列
        char m[20];
        int x,t;
        while(cin>>m&&(m[0]!='S'))
        {
            if(m[0]=='E')
            {
                cin>>x;
                t=a[x];
                if(q[t].empty())    p.push(t);
                q[t].push(x);
            }
            else if(m[0]=='D')
            {
                t=p.front();
                cout<<q[t].front()<<endl;;
                q[t].pop();
                if(q[t].empty())    p.pop();
            }
        }
        cout<<endl;
    }
    return 0;
}