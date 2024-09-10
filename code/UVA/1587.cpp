#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
pair <int,int> box[6];
int i;
int main()
{
    while(1)
    {
        for(i=0;i<6;i++){
            if(scanf("%d%d",&box[i].first,&box[i].second)!=2) return 0;
            if(box[i].first>box[i].second)
                swap(box[i].first,box[i].second);
        }
        sort(box,box+6);
        if(box[0].first==box[1].first&&box[1].first==box[2].first&&box[2].first==box[3].first&&
             box[0].second==box[1].second&&box[1].second==box[4].first&&box[4].first==box[5].first&&
             box[2].second==box[3].second&&box[3].second==box[4].second&&box[4].second==box[5].second)
        cout<<"POSSIBLE"<<endl;
        else
        cout<<"IMPOSSIBLE"<<endl;
    }
}