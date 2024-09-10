#include <iostream>
using namespace std;
char ch, str[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./";
int main()
{
	while ((ch = getchar()) != EOF){
		int i;
		for (i = 0; str[i] != ch && str[i]; i++);
        
		if (str[i])
		{
			cout << str[i - 1];
		}
		else
		{
			cout << ch;
		}
	}
	return 0;
}
