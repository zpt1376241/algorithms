#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN=1e6+10;
int n,a[MAXN],b[MAXN],ans;
signed main(){
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld%lld",&a[i],&b[i]);
		ans+=b[i];
	}
	if(ans<0){
		printf("No");
		return 0;
	}
	for(int i=1;i<=n;i++){
		int g=b[i]-a[i];
		if(g==0) continue;
		if(ans-g>=0) b[i]-=g,ans-=g;
		else b[i]-=ans,ans=0;
		if(ans==0) break;
	}
	if(ans==0) printf("Yes\n");
	else{
		printf("No");
		return 0;
	}
	for(int i=1;i<=n;i++) printf("%lld ",b[i]);
	return 0;
}
