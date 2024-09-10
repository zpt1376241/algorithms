#include<stdio.h>
int C(int n,int k)
{
    if(k==0)    return 1;
    if(n==k)    return 1;
    else if(k==1)   return n;
    else    return C(n-1,k-1)+C(n-1,k);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("1");
        for(int p=1;p<i;p++)
            {
                printf(" %d",C(i-1,p));
            }
            printf("\n");
        }

    
}