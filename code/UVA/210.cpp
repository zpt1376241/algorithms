#include <bits/stdc++.h>
#define ll long long
#define fo(i, j, n) for (register int i = j; i <= n; ++i)
using namespace std;
int T, n, t1, t2, t3, t4, t5, q, s[100]; 
int v[100];
string str;
vector<string> ss;
deque<int> r; 
deque<int> w;  
bool flag = false;
void read()
{
    memset(v, 0, sizeof(v));
    ss.clear();
    cin >> n >> t1 >> t2 >> t3 >> t4 >> t5 >> q;
    int last_line = 0;
    getline(cin, str);
    fo(i, 1, n)
    {
        s[i] = last_line;
        while (getline(cin, str))
        {
            ss.push_back(str); 
            last_line++;
            if (str == "end")
                break;
        }
        r.push_back(i);
    }
}
void ext(int i)
{
    int time = q; 
    char c;
    while (time > 0)
    {
        c = ss[s[i]][2];
        if (c == '=')
        {
            time -= t1;
            v[ss[s[i]][0] - 'a'] = isdigit(ss[s[i]][5]) ? (ss[s[i]][4] - '0') * 10 + ss[s[i]][5] - '0' : ss[s[i]][4] - '0';
        }
        else if (c == 'i')
        { 
            time -= t2;
            printf("%d: %d\n", i, v[ss[s[i]][6] - 'a']);
        }
        else if (c == 'c')
        { 
            if (flag)
            { 
                w.push_back(i);
                return;
            }
            time -= t3;
            flag = true;
        }
        else if (c == 'l')
        { 
            if (!w.empty())
            {
                r.push_front(w.front());
                w.pop_front();
            }
            flag = false; 
            time -= t4;
        }
        else
        { 
            time -= t5;
            return; 
        }
        s[i]++; 
    }
    r.push_back(i);
}
void solve()
{
    read();
    while (!r.empty())
    {
        int x = r.front();
        r.pop_front();
        ext(x);
    }
    if (T)
        putchar(10);
}
int main()
{
    scanf("%d", &T);
    while (T--)
        solve();
    return 0;
}
