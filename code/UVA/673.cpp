#include<iostream>
#include<stack>
#include<string>
using namespace std;
stack<char> p;
char f(char a)
{
    if(a==']')  return '[';
    else if(a=='}') return '{';
    else if(a==')') return'(';
    return '\0';
}
int main()
{
    int n;
    cin>>n;
    string s;
    getline(cin,s);
    while(n--)
    {
        while(!p.empty())   p.pop();
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(p.empty())
            {
                p.push(s[i]);
                continue;
            }
            if(f(s[i])==p.top())
                p.pop();
            else p.push(s[i]);
        }
        if(p.empty())   cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}