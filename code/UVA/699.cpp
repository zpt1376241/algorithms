#include<iostream>
#include<cstring>
using namespace std;
const int maxn=100;
int ans[maxn];
bool init();
void build(int pos);
int main()
{
	int count=0;
	while(init())
	{
		int i=0;
		printf("Case %d:\n",++count);
		for(i;i<maxn&&ans[i]==0;i++);
		printf("%d",ans[i]);
		i++;
		for(i;i<maxn;i++)
		{
			if(ans[i]==0)continue;
			printf(" %d",ans[i]);
		}
		printf("\n\n");
	}
}
void build(int pos)
{
	int pv;
	scanf("%d",&pv);
	if(pv==-1)return ;
	ans[pos]+=pv;
	build(pos-1);
	build(pos+1);
}
bool init()
{
	int root;
	scanf("%d",&root);
	if(root==-1)    return false;
	int pos=maxn/2;
	memset(ans,0,sizeof(ans)); 
	ans[pos]=root;
	build(pos-1);
	build(pos+1);
	return true;
} 