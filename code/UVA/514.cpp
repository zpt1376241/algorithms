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
            //start  ���Ĵ���
            stack<int>st;
            bool ok = true;
            while(b <= n)
            {
                if(a == target[b])
                {
                /*���ж��Ƿ����ֱ�Ӵ�a->b a>n��ʱ��Ϊ�� ��������� ���Բ���Ҫ�п� */
                    a++,b++;
                }
                else if(!st.empty()&&st.top() == target[b])
                {
                /*���ж��Ƿ���Դ���תվc->a ע���п� */
                    b++;st.pop();
                }
                else if(a <= n) st.push(a++);//���a��Ϊ��Ҳ����<=n ��ջ
                else
                {
                    ok = false;break;//û���ٽ�����ȥ�� return false
                }
            }
            printf("%s\n",ok?"Yes":"No");
            //end
        }
        cout<<endl;
    }
    return 0;
}