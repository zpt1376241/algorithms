#include<bits/stdc++.h>
using namespace std;
queue<int> a;
int main()
{
    int n;
    while(cin>>n)
    {
        if(!n)  break;
        int flag=0;
        for(int i=1;i<=n;i++)   a.push(i);
        cout<<"Discarded cards:";
        while(a.size()>1)
        {
            if(flag==0)
            {
                flag=1;
            }
            else cout<<',';
            cout<<' '<<a.front();
            a.pop();
            a.push(a.front());
            a.pop();
        }
        cout<<endl;
        cout<<"Remaining card: "<<a.front()<<endl;
        a.pop();
    }
}