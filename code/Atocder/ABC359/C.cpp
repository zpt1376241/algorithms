#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll s1,s2,t1,t2;
    cin>>s1>>s2>>t1>>t2;

    ll ans=0;
    ans+=abs(t2-s2);//иооб
    
    if(s2%2==0&&s1%2==1)
    {
        s1--;
    }
    if(s2%2==1&&s1%2==0)
    {
        s1--;
    }
    if(t2%2==1&&t1%2==0)
    {
        t1--;
    }
    if(t2%2==0&&t1%2==1)
    {
        t1--;
    }
    ll cha_y=abs(s2-t2);
    ll cha_x=abs(s1-t1);
    if(cha_x>cha_y)//вСср
    {
        ans+=(cha_x-cha_y)/2;
    }

    cout<<ans<<endl;

    return 0;
}