#include<cstdio>
#include<iostream>
using namespace std;
void quick_sort(int q[],int l,int r)
{
    if(l>=r)    return;

    int i=l-1,j=r+1,mid=q[l+r>>1];
     while(i<j)
    {
        do i++;while(q[i]<mid);
        do j--;while(q[j]>mid);
        if(i<j) swap(q[i],q[j]);
    }
    quick_sort(q,l,j);
    quick_sort(q,j+1,r);
}
const int N=100010;
int a[N];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    quick_sort(a,1,n);
    cout<<a[k];
}