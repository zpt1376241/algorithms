#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int _max=1e3+5;
vector<string> s[_max];
int len[250];
int main()
{
    string line,buf;
    int i=0,j=0;
    while(getline(cin,line))
    {
        stringstream ss;
        ss<<line;
        while(ss>>buf)
        {
            len[j]=max(len[j],(int)buf.length());
            s[i].push_back(buf);
            j++;
        }
        i++;j=0;
    }
    cout<<setiosflags(ios::left);
    for(int k=0;k<i;k++)
    {
        for(int l=0;l<s[k].size()-1;l++)
            cout<<setw(len[l]+1)<<s[k][l];
        cout<<s[k][s[k].size()-1]<<endl;
    }
}