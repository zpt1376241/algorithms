#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
string dict[120010];
bool compound[120010];
int main(){
    int n=0;
    while(cin>>dict[n]){
        n++;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int l=dict[i].length();string s=dict[j].substr(0,l);
            if(dict[i]==s){
                string sub=dict[j].substr(dict[i].length(),dict[j].length()-1);
                if(binary_search(dict,dict+n,sub)){
                    compound[j]=true;
                }
            }
            else break;
        }
    }
    for(int i=0;i<n;i++){
        if(compound[i]) cout<<dict[i]<<endl;
    }
    return 0;
}