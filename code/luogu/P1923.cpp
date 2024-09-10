#include<cstdio>
#include<iostream>
using namespace std;
int a[5000001],n,m;
void qsort(int l,int r)
{
    int i,j,mid;
    i=l;j=r;
    mid=a[(l+r)/2];
    do
    {
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;j--;
        }
    }while(i<=j);
    if(m+1<=j) qsort(l,j);
    else if(i<=m+1) qsort(i,r);
    else return;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    qsort(1,n);
    printf("%d",a[m+1]);
}