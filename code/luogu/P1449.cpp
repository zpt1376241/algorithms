#include<iostream>
#include<stack>
#include<string>
using namespace std;
stack<int> a;
int x,y,s;
int main()
{
    char t;
    do
    {
        t=getchar();
        if(t>='0'&&t<='9')
            s=s*10+t-'0';
        else if(t=='.')
            a.push(s),s=0;
        else if(t!='@')
        {
            x=a.top();a.pop();
            y=a.top();a.pop();
            switch(t)
            {
                case('+'):a.push(x+y);break;
                case('-'):a.push(y-x);break;
                case('*'):a.push(x*y);break;
                case('/'):a.push(y/x);break;
            }
        }
    } while (t!='@');
    cout<<a.top()<<endl;
    return 0;
}