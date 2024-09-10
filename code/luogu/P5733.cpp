#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[101];
    int i=1;
    while(scanf("%c",&s[i])!=EOF){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]-='a'-'A';
        }
        printf("%c",s[i]);
        i++;
    }
       
    
}