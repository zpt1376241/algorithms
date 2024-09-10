#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int flag1 = 0, flag2 = 0, fflag = 1;
char a[100] = " -- is not a palindrome.";
char b[100] = " -- is a regular palindrome.";
char c[100] = " -- is a mirrored string.";
char d[100] = " -- is a mirrored palindrome.";
char s[100], x[100];

int main()
{

    while (cin >> s)
    {
        int p = 0, i = 0, j = 0, len = 0, k = 0, l = 0;
        flag1 = 0;
        flag2 = 1;
        fflag = 1;
        for (i = 0, j = 0, len = strlen(s) - 1; j < strlen(s); i++, j++, len--)
        {
            x[i] = s[len];
        }
        if (strcmp(x, s) == 0)
            flag1 = 1;
        for (p = 0; p <= strlen(s) - 1; p++)
        {
            if (s[p] == 'A' || s[p] == 'E' || s[p] == 'H' || s[p] == 'I' || s[p] == 'J' || s[p] == 'L' || s[p] == 'M' || s[p] == 'O' || s[p] == 'S' || s[p] == 'T' || s[p] == 'U' || s[p] == 'V' || s[p] == 'W' || s[p] == 'X' || s[p] == 'Y' || s[p] == 'Z' || s[p] == '1' || s[p] == '2' || s[p] == '3' || s[p] == '5' || s[p] == '8')
            {
                continue;
            }
            else
            {
                flag2 = 0;
                fflag = 0;
                break;
            }
        }
        if (fflag == 1)
        {
            for (k = 0, l = strlen(s) - 1; k <= l; k++, l--)
            {
                if (l == k)
                {
                    if (s[k] == 'A' || s[k] == 'H' || s[k] == 'I' | s[k] == 'M' || s[k] == 'O' | s[k] == 'T' || s[k] == 'U' | s[k] == 'V' || s[k] == 'W' | s[k] == 'X' || s[k] == 'Y' | s[k] == '1' || s[k] == '8')
                    {
                        flag2 = 1;
                    }
                    else
                    {
                        flag2 = 0;
                    }
                    break;
                }
                
    
                
                    if ((s[k] == 'E' && s[l] == '3') || (s[k] == '3' && s[l] == 'E'))
                        continue;
                    else if ((s[k] == 'J' && s[l] == 'L') || (s[k] == 'L' && s[l] == 'J'))
                        continue;
                    else if ((s[k] == 'S' && s[l] == '2') || (s[k] == '2' && s[l] == 'S'))
                        continue;
                    else if ((s[k] == 'Z' && s[l] == '5') || (s[k] == '5' && s[l] == 'Z'))
                        continue;
                    else if((s[k]==s[l])&&(s[k] == 'A' || s[k] == 'H' || s[k] == 'I' | s[k] == 'M' || s[k] == 'O' | s[k] == 'T' || s[k] == 'U' | s[k] == 'V' || s[k] == 'W' | s[k] == 'X' || s[k] == 'Y' | s[k] == '1' || s[k] == '8'))
                        continue;
                    else
                    {
                        flag2 = 0;
                        break;
                    }
                
            }
        }
        if (flag1 == 0 && flag2 == 0)
            strcat(s, a);
        else if (flag1 == 1 && flag2 == 0)
            strcat(s, b);
        else if (flag1 == 0 && flag2 == 1)
            strcat(s, c);
        else if (flag1 == 1 && flag2 == 1)
            strcat(s, d);
        cout << s << endl
             << endl;
        memset(s, 0, sizeof(s));
        memset(x, 0, sizeof(x));
    }
}