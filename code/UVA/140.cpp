#include<bits/stdc++.h>
#define maxn 30
using namespace std;
typedef long long ll;
int mp[maxn][maxn];
int vis[maxn],num[10];
int minn,cnt,pos[maxn],ans[10];
 
bool read(){
	memset(vis,0,sizeof(vis));
	memset(mp,0,sizeof(mp));
	char ch='.';
	while(ch!='\n'){
		ch=getchar(); 
		if(ch=='#') return false;
		int id=ch-'A';
		vis[id]=1;
		ch=getchar();
		while((ch=getchar())!=';'&&ch!='\n'){
			int tmp=ch-'A';
			vis[tmp]=1;
			mp[id][tmp]=1;
			mp[tmp][id]=1;
		}
	}
	return true;
}
 
void solve(){
	for(int i=0;i<cnt;i++){
		pos[num[i]]=i;
	}
	int maxx=0;
	for(int i=0;i<cnt;i++){
		int u=num[i];
		for(int j=0;j<maxn;j++){
			if(mp[u][j]){
				maxx=max(maxx,i<pos[j]?pos[j]-i:i-pos[j]);
				if(maxx>=minn) return;
			}
		}
	}
	if(minn>maxx){
		minn=maxx;
		for(int i=0;i<cnt;i++) ans[i]=num[i];
	}
}
 
int main(){
	while(read()) {
		cnt=0;
		minn=10;
		for(int i=0;i<maxn;i++)
			if(vis[i]) num[cnt++]=i;
		do{
			solve();
		}while(next_permutation(num,num+cnt));
		for(int i=0;i<cnt;i++){
			printf("%c ",(char)ans[i]+'A');
		}
		printf("-> %d\n",minn);
	}
	
	return 0;
}
