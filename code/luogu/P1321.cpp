#include<bits/stdc++.h>
using namespace std;
int main()
{
	int boy=0,girl=0;
	string st;
	cin>>st;
	for(int i=0;i<=st.length();i++){
		if (st[i]=='b'||st[i+1]=='o'||st[i+2]=='y')//�ж����ŵ�������ĸ�Ƿ�Ϊb��o��y 
			boy++;//boy��������һ 
		if (st[i]=='g'||st[i+1]=='i'||st[i+2]=='r'||st[i+3]=='l')//�ж����ŵ�������ĸ�Ƿ�Ϊg��i��r��l 
			girl++;//girl��������һ 
	}
	cout<<boy<<endl;
	cout<<girl<<endl;
	return 0;
}