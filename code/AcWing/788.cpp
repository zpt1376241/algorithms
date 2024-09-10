#include<cstdio>
#include<iostream>
using namespace std;
const int N=100000;
int a[N],tmp[N];
typedef unsigned long long ull;
ull ans;
void merge_sort(int q[],int l,int r)
{
    if(l>=r)    return ;
    
    int mid=l+r>>1;
    merge_sort(q,l,mid);
    merge_sort(q,mid+1,r);
    
    int i=l,j=mid+1,k=0;
    while(i<=mid&&j<=r)
    {
        if(q[i]<=q[j])  tmp[k++]=q[i++];
        else    tmp[k++]=q[j++],ans+=mid-i+1;
    }
    
    while(i<=mid)   tmp[k++]=q[i++];
    while(j<=r)     tmp[k++]=q[j++];
    
    for(i=l,j=0;i<=r;i++,j++)   q[i]=tmp[j];
}
int main()
{
    int n;  scanf("%d",&n);
    for(int i=0;i<n;i++)    scanf("%d",&a[i]);
    merge_sort(a,0,n-1);
    cout<<ans;
}