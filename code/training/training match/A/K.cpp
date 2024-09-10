#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int,int>
#define inf 0x3f3f3f3f
const int maxn =1e5+5;
const ll mod=998244353;
ll m=9223372036854775807;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin>>N;
    while(N--)
    {
        int k;
        cin>>k;
        vector<int> tong(35);
        while(k--)
        {
            int t;  cin>>t;
            int kase=0;
            while(t>1)
            {
                t>>=1;
                kase++;
            }
            tong[kase+1]++;
        }
        cout<<*max_element(tong.begin(),tong.end())<<endl;
    }

    return 0;
}