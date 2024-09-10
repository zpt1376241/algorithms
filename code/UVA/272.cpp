#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int flag=0,i;
    string a;
    while(getline(cin,a)){
        int len=a.length();
        for(i=0;i<len;i++){
            if(a[i]=='\"'){
                if(flag==0){
                    cout<<"``";
                    flag=1;
                }else if(flag==1){
                    cout<<"''";
                    flag=0;
                }
            }else{
                cout<<a[i];
            }
        }
        cout<<endl;
    }
}
