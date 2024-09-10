#include<iostream>
#include<cstring>
#include<cmath>
#define MAX_N 100005
int main()
{
	char buf[MAX_N],ch[MAX_N],ans[MAX_N];
	while(scanf("%s%s",buf,ch)!=EOF){
		memset(ans,0,sizeof(ans));
		int len_buf=strlen(buf);
		int len_ch=strlen(ch);
		int index=0;
		for(int i=0;i<len_ch;i++){
			if(ch[i]==buf[index]){
				ans[index]=ch[i];
				index++;
			}
		}
		int flag=1;
		for(int i=0;i<len_buf;i++){
			if(ans[i]!=buf[i]){
				flag=0;
				break;
			}
		}
		if(flag) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
