#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,b,c;
    char a[100],m[100],p;
    memset(m,0,sizeof(m));
    memset(a,0,sizeof(a));
    cin>>i;
    for(int cnt=1;cnt<=i;cnt++){
        cin>>a;
        if(a[0]>='a'&&a[0]<='z'){
            p=a[0];
            cin>>b>>c;
        }else{
            sscanf(a,"%d",&b);
            cin>>c;
        }
        memset(m,0,sizeof(m));
        if(p=='a')  sprintf(m,"%d+%d=%d",b,c,b+c);
        else if(p=='b')  sprintf(m,"%d-%d=%d",b,c,b-c);
        else if(p=='c')  sprintf(m,"%d*%d=%d",b,c,b*c);
        cout<<m<<endl<<strlen(m)<<endl;
    }    
    return 0;
}