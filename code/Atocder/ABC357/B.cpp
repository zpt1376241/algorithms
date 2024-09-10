#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int max_=1e5+3;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    char s[max_];
    ll A=0,a=0;
    cin>>s;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            a++;
        else 
            A++;
    }
    if(A>a)
    {
        for(int i=0;i<strlen(s);i++)
            s[i]=toupper(s[i]);
    }
    else
        for(int i=0;i<strlen(s);i++)
            s[i]=tolower(s[i]);
    cout<<s<<endl;
}