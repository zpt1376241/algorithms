#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int H[15][15];
int V[15][15];
int ans[100];
int main()
{
	int n;
	int m;
	int cnt=1;
	while(cin>>n>>m)
	{
		if(cnt!=1)
		{
			printf("\n**********************************\n\n");
		}
		printf("Problem #%d\n\n",cnt++);
		memset(ans,0,sizeof(ans));
		memset(H,0,sizeof(H));
		memset(V,0,sizeof(V));
		for(int i=0; i<m; ++i)
		{
			char type;
			int x,y;
			cin>>type>>x>>y;
			if(type=='H')
			{
				H[x][y]=1; 
			}
			if(type=='V')
			{
				V[y][x]=1;
			}
		}

		for(int i=1; i<=n-1; ++i)
		{
			for(int j=1; j<=n-1; ++j)
			{
				int a=1;
				while(a+i<=n&&a+j<=n)
				{
					if(H[i][j+a-1]==1&&V[i+a-1][j]==1)
					{
						int flag=0;
						for(int temp=j; temp<=j+a-1; ++temp)
						{
							if(H[i+a][temp]!=1)
							{
								flag=1;
								break;
							}
						}
						for(int temp=i; temp<=i+a-1; ++temp)
						{
							if(V[temp][j+a]!=1)
							{
								flag=1;
								break;
							}
						}

						if(flag==0)
						{
							ans[a]++;
						}
					}
					else
					{
						break;
					}
					a++;
				}
			}
		}
		int f=0;
		for(int i=0; i<100; ++i)
		{
			if(ans[i]!=0)
			{
				f=1;
				printf("%d square (s) of size %d\n",ans[i],i);
			}
		}
		if(f==0)
			printf("No completed squares can be found.\n");
	}
	return 0;
}