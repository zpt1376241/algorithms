#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int a=0,b=0,day=1;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        day*=a;
        day%=7;//��Ϊ���֮����7�ı������ǲ��ּ�ʹ�˼�Ҳ����7�ı���������ֱ�ӱ߳˱�ģ����һ����ģ������
    }
    if(day==1)cout<<"Monday";
    if(day==2)cout<<"Tuesday";
    if(day==3)cout<<"Wednesday";
    if(day==4)cout<<"Thursday";
    if(day==5)cout<<"Friday";
    if(day==6)cout<<"Saturday";
    if(day==0)cout<<"Sunday";    
}