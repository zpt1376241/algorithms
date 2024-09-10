#include<iostream>
#include<queue>
using namespace std;
queue<int>a;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)    a.push(i+1);
    while(!a.empty())
    {
        for(int i=1;i<m;i++)
        {
            a.push(a.front());
            a.pop();
        }
        cout<<a.front()<<" ";
        a.pop();
    }
}