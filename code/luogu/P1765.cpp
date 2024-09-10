#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    string a;
    int n[27]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4,1};
    int sum=0;
    getline(cin,a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '){
            sum+=n[26];
        }else if(a[i]>='a'&&a[i]<='z'){
            sum+=n[a[i]-'a'];
        }
    }
    cout<<sum;
}
/*´íÎó£º
if(isspace(a[i])){
            sum+=n[26];
        }else{
            sum+=n[a[i]-'a'];
        }*/