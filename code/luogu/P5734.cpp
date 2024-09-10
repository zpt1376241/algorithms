#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101],a[101];
    int n,jud;
    cin>>n;
    cin>>s;
    for(int i=1;i<=n;i++){
        cin>>jud;
        if(jud==1){
            cin>>a;
            strcat(s,a);
            cout<<s;
            cout<<endl;
        }else if(jud==2){
            int p,q;
            cin>>p>>q;
            s[p+q]='\0';
            strcpy(s,&s[p]);
            cout<<s;
            cout<<endl;
        }else if(jud==3){
            int p;
            cin>>p;
            cin>>a;
            strcat(a,&s[p]);
            s[p]='\0';
            strcat(s,a);
            cout<<s;
            cout<<endl;
        }else if(jud==4){
            cin>>a;
            char *k;
            k=strstr(s,a);
            if(k==NULL){
                cout<<"-1";
                cout<<endl;
            }else{
                cout<<(int)(k-s);
                cout<<endl;
            }
        }
    }
    
}