#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int b[100];
int main()
{
    int s1,s2,s3,freq=0,p;
    cin>>s1>>s2>>s3;
    for(int i=1;i<=s1;i++)
        for(int j=1;j<=s2;j++)
            for(int k=1;k<=s3;k++){
                b[i+j+k]++;
            }
    for(int i=1;i<=s1+s2+s3;i++){
        if(b[i]>freq){
            freq=b[i];
            p=i;
        }
    }
    cout<<p;
}