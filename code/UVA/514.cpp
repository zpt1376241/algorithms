#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+50;
int target[maxn];
int main()
{
    cin.tie(0);cout.tie(0);
    int n;
    int m = 0;
    while(cin>>n&&n)
    {
        while(1)
        {
            int a = 1,b = 1;
            cin >> target[1];
            if(target[1] == 0)    break;
            else       
                for(int i = 2;i <= n;i++)  cin>>target[i];
            //start  核心代码
            stack<int>st;
            bool ok = true;
            while(b <= n)
            {
                if(a == target[b])
                {
                /*先判断是否可以直接从a->b a>n的时候为空 不可能相等 所以不需要判空 */
                    a++,b++;
                }
                else if(!st.empty()&&st.top() == target[b])
                {
                /*在判断是否可以从中转站c->a 注意判空 */
                    b++;st.pop();
                }
                else if(a <= n) st.push(a++);//如果a不为空也就是<=n 进栈
                else
                {
                    ok = false;break;//没法再进行下去了 return false
                }
            }
            printf("%s\n",ok?"Yes":"No");
            //end
        }
        cout<<endl;
    }
    return 0;
}