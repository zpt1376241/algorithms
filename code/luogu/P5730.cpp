#include<cstdio>
#include<iostream>
using namespace std;
char a[101];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
       cin>>a[i];
    }
    for(int i=1;i<=5;i++){
        for(int k=1;k<=n;k++){
            if(i==1){
                if(a[k]!='1'&&a[k]!='4')  cout<<"XXX";
                else if(a[k]=='1')    cout<<"..X";
                else if(a[k]=='4')    cout<<"X.X";
            }else if(i==2){
                if(a[k]=='0'||a[k]=='8'||a[k]=='9'||a[k]=='4')   cout<<"X.X";
                else if(a[k]=='1'||a[k]=='2'||a[k]=='3'||a[k]=='7')  cout<<"..X";
                else if(a[k]=='5'||a[k]=='6')   cout<<"X..";
            }else if(i==3){
                if(a[k]!='0'&&a[k]!='1'&&a[k]!='7')   cout<<"XXX";
                else if(a[k]=='0')    cout<<"X.X";
                else if(a[k]=='1'||a[k]=='7')   cout<<"..X";
            }else if(i==4){
                if(a[k]=='0'||a[k]=='6'||a[k]=='8') cout<<"X.X";
                else if(a[k]=='2') cout<<"X..";
                else cout<<"..X";
            }else if(i==5){
                if(a[k]=='1'||a[k]=='7'||a[k]=='4') cout<<"..X";
                else cout<<"XXX";
            }
            if(k!=n)    cout<<".";
            else if(i!=5)   cout<<endl;
        }
    }
    return 0;
}
