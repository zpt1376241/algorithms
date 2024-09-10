#include <stdio.h>
#include <string.h>
#include <queue>
#define N 10
using namespace std;
struct date
{
    int x;
    int y;
    int temp;
};
bool book[N][N];

int bfs(int sx, int sy, int tx, int ty)
{
    int nx, ny;
    int nex[8][2] = {-2, -1, -1, -2, -2, 1, 1, -2, -1, 2, 2, -1, 1, 2, 2, 1};
    memset(book, false, sizeof(book));
    queue<date> q;
    book[sx][sy] = true;
    q.push(date{sx, sy, 0});
    while (!q.empty())
    {
        date e = q.front();
        q.pop();
        if (e.x == tx && e.y == ty)
            return e.temp;

        for (int i = 0; i < 8; i++)
        {
            nx = e.x + nex[i][0];
            ny = e.y + nex[i][1];
            if (nx <= 0 || ny <= 0 || nx > 8 || ny > 8)
                continue;
            if (nx == tx && ny == ty)
                return e.temp + 1;
            if (book[nx][ny] == false)
            {
                book[nx][ny] = true;
                q.push(date{nx, ny, e.temp + 1});
            }
        }
    }
}
int main()
{
    char ch1, ch2;
    int sx, sy, tx, ty;
    while (scanf("%c%d %c%d%*c", &ch1, &sy, &ch2, &ty) != EOF)
    {
        sx = ch1 - 'a' + 1;
        tx = ch2 - 'a' + 1;
        printf("To get from %c%d to %c%d takes %d knight moves.\n", sx + 'a' - 1, sy, tx + 'a' - 1, ty, bfs(sx, sy, tx, ty));
    }
    return 0;
}