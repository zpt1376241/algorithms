#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    char ph[50];
    cin>>n>>ph;
    for(int i=0;ph[i]!='\0';i++){
        putchar((ph[i]-'a'+n)%26+'a');
    }
    return 0;
}