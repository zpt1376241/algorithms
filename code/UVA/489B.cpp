#include <iostream>
#include <string.h>
#include <stdio.h>
#include <string>
using namespace std;
void guess(char ch);
int win;
int lose;
int lef;
int chance;
string s1, s2;
int main()
{
    int rnd;
    while(cin>>rnd>>s1>>s2&&rnd!=-1)
    {
        win=0;lose=0;
        chance=7;
        lef=s1.length();
        cout<<"Round "<<rnd<<endl;
        for(int i=0;i<s2.length();++i)
        {
            guess(s2[i]);
            if(win||lose)
            {
                break;
            }
        }
        if(win)
            cout << "You win." << endl;
        else if(lose)
            cout << "You lose." << endl;
        else
            cout << "You chickened out." << endl;
    }
    return 0;
}
void guess(char ch)
{
    int bad=1;
    for(int i=0;i<s1.length();++i)
    {
        if(ch==s1[i])
        {
            lef--;
            s1[i]=' ';
            bad=0;
        }
    }
    if(bad) --chance;
    if(!chance) lose=1;
    if(!lef) win=1;
}

