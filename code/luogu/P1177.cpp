#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n,a[100050];
void qsort(int a[],int l,int r)
{
    if(l>=r) return;   
    int i=l,j=r,mid=a[(l+r)/2];
    do
    {
        while(a[i]<mid)    i++;
        while(a[j]>mid)    j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;j--;
        }
    }while(i<=j);
    qsort(a,l,j);
    qsort(a,i,r);
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    qsort(a,1,n);
    //sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
        printf("%d ",a[i]);
}