#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

char Card[54][54][3];
int Top[54];
int Sum;

int match(char *a, char *b)
{
    return (a[0] == b[0] || a[1] == b[1]);
}

int deal(int now, int s)
{
    int count = 0, temp = now;
    while (temp >= 0 && count < s)
        if (Top[--temp] >= 0)
            count++;
    if (temp >= 0 && match(Card[now][Top[now]], Card[temp][Top[temp]]))
    {
        Top[temp]++;
        Card[temp][Top[temp]][0] = Card[now][Top[now]][0];
        Card[temp][Top[temp]][1] = Card[now][Top[now]][1];
        if (--Top[now] < 0)
            Sum++;
        return temp;
    }
    else
        return -1;
}

int main()
{
    while (scanf("%s", Card[0][0]) && Card[0][0][0] != '#')
    {
        for (int i = 1; i < 52; ++i)
            scanf("%s", Card[i][0]);
        for (int i = 0; i < 52; ++i)
            Top[i] = 0;

        Sum = 0;
        for (int now = 1; now < 52;)
        {
            while (Top[now] < 0)
                now++;
            int save = deal(now, 3);
            if (save >= 0)
                now = save;
            else
            {
                save = deal(now, 1);
                if (save >= 0)
                    now = save;
                else
                    now++;
            }
        }

        printf("%d pile", 52 - Sum);
        if (51 > Sum)
            printf("s");
        printf(" remaining:");
        for (int i = 0; i < 52; ++i)
            if (Top[i] >= 0)
                printf(" %d", Top[i] + 1);
        printf("\n");
    }
    return 0;
}