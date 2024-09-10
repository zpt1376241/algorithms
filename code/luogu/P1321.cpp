#include<bits/stdc++.h>
using namespace std;
int main()
{
	int boy=0,girl=0;
	string st;
	cin>>st;
	for(int i=0;i<=st.length();i++){
		if (st[i]=='b'||st[i+1]=='o'||st[i+2]=='y')//判断连着的三个字母是否为b、o、y 
			boy++;//boy计数器加一 
		if (st[i]=='g'||st[i+1]=='i'||st[i+2]=='r'||st[i+3]=='l')//判断连着的三个字母是否为g、i、r、l 
			girl++;//girl计数器加一 
	}
	cout<<boy<<endl;
	cout<<girl<<endl;
	return 0;
}