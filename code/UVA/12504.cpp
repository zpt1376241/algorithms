#include <iostream>
#include <map>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
string c1[105], c2[105], c3[105];
map<string, string> mp;
int main()
{
    string s1, s2;
    int n;
    cin >> n;
    while (n--)
    {
        mp.clear();
        cin >> s1 >> s2;
        int m1 = 0, m2 = 0, m3 = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == '{' || s1[i] == '}')
            {
                continue;
            }
            else
            {
                string ss = "", sss = "";
                while (s1[i] != ':')
                {
                    ss += s1[i];
                    i++;
                }
                i++;
                while (s1[i] != ',' && s1[i] != '}')
                {
                    sss += s1[i];
                    i++;
                }
                mp[ss] = sss;
            }
        }
        for (int i = 0; i < s2.size(); i++)
        {
            if (s2[i] == '{' || s2[i] == '}')
            {
                continue;
            }
            else
            {
                string ss = "", sss = "";
                while (s2[i] != ':')
                {
                    ss += s2[i];
                    i++;
                }
                i++;
                while (s2[i] != ',' && s2[i] != '}')
                {
                    sss += s2[i];
                    i++;
                }
                if (mp[ss] == "")
                {
                    c1[++m1] = ss;
                }
                else if (mp[ss] != sss)
                {
                    c3[++m3] = ss;
                    mp[ss] = "";
                }
                else
                    mp[ss] = "";
            }
        }
        for (map<string, string>::iterator i = mp.begin(); i != mp.end(); i++)
            if (i->second != "")
                c2[++m2] = i->first;
        if (m1 == 0 && m2 == 0 && m3 == 0)
        {
            cout << "No changes\n\n";
            continue;
        }
        if (m1 != 0)
        {
            sort(c1 + 1, c1 + 1 + m1);
            cout << "+" << c1[1];
            for (int i = 2; i <= m1; i++)
                cout << "," << c1[i];
            cout << endl;
        }
        if (m2 != 0)
        {
            sort(c2 + 1, c2 + 1 + m2);
            cout << "-" << c2[1];
            for (int i = 2; i <= m2; i++)
                cout << "," << c2[i];
            cout << "\n";
        }
        if (m3 != 0)
        {
            sort(c3 + 1, c3 + 1 + m3);
            cout << "*" << c3[1];
            for (int i = 2; i <= m3; i++)
                cout << "," << c3[i];
            cout << "\n";
        }
        cout << endl;
    }
    return 0;
}
