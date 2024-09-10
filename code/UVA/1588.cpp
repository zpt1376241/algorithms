#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
char a[105],b[105];
bool test(int k,char *a,char *b)
{
    for(int i=0;a[k+i]&&b[i];i++)
        if(a[k+i]+b[i]-2*'0'>3) 
            return false;
    return true;
}
int func(char *a,char *b)
{
    int k=0;
    while(!test(k,a,b))
        k++;
    return max(strlen(a),strlen(b)+k);
}
int main()
{
    while(scanf("%s %s",a,b)!=EOF)
    {
        cout<<min(func(a,b),func(b,a))<<endl;
    }
}