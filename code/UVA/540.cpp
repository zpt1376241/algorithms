#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    while(cin>>n&&n)
    {
        map<int ,int> a;//�洢��Ա�����ĸ��Ŷ�
        cout<<"Scenario #"<<++cnt<<endl;
        for(int i=1;i<=n;i++)
        {
            int t,k;  cin>>t;
            for(int j=1;j<=t;j++)
            {
                cin>>k; a[k]=i;
            }
        }
        queue<int> p,q[1050];//p�洢�ŶӵĶ���,q�洢�����Ŷӵĳ�Ա�Ķ���
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