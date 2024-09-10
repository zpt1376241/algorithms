#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n>=10)
        cout << "1 2 3" << endl;
    else if(n>=3&&n<=9)
        cout << "98 99 100" << endl;
    else if(n==2)
        cout << "70 80 99" << endl;
    else if(n==1)
        cout << "30 50 88" << endl;
    return 0;
}