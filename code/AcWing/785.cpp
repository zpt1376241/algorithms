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
int main()
{
    int n,t[100010];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>t[i];
    quick_sort(t,0,n-1);
    for(int i=0;i<n;i++)
        cout<<t[i]<<" ";
}