#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int n,ans=0,p=0;
    char a[102];
    cin>>n;
    cin>>a;
    for(int i=0;i<n;i++){
        if(a[i]=='V'&&a[i+1]=='K'){
            ans++;i++;
        }else if(a[i]=='V'&&a[i+1]=='V'&&a[i+2]!='K'&&p==0){
            p=1;
            ans++;i++;
        }else if(a[i]=='K'&&a[i+1]=='K'&&p==0){
            p=1;
            ans++;i++;
        }
    }
    cout<<ans;
}
//VVKKK