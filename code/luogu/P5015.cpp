#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[10];
    int s,num=0;
    gets(a);
    s=strlen(a);
    for(int i=0;i<s;i++){
        if(!isspace(a[i])){
            num++;
        }
    }
    cout<<num;
    return 0;
}