#include<bits/stdc++.h>
using namespace std;
map<string,int> cnt;//�ַ�������������ȥ��
vector<string> words;//�洢ԭ�ַ���
vector<string> ans;//�洢��
string f(string s)
{
    for(int i=0;i<s.length();i++)
        s[i]=tolower(s[i]);
    sort(s.begin(),s.end());
    return s;
}
int main()
{
    string s;
    while(cin>>s)
    {
        if(s[0]=='#')   break;
        words.push_back(s);
        string r=f(s);
        cnt[r]++;
    }
    for(int i=0;i<words.size();i++)
        if(cnt[f(words[i])]==1) ans.push_back(words[i]);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
    return 0;
}