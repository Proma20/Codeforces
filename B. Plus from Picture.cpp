#include<bits/stdc++.h>

using namespace std;

int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1}, visited[505][505], c1, c2;
char board[505][505];

void dfs(int x, int y)
{
    if (visited[x][y] == 1) return;

    visited[x][y] = 1;

    for (int i = 0; i < 4; i++)
    {
        if (board[x + dx[i]][y + dy[i]] == '*' && (x + dx[i] == c1 || y + dy[i] == c2))
            dfs(x + dx[i], y + dy[i]);
    }
}

bool centerFinder(int x, int y)
{
    for (int i = 0; i < 4; i++)
    {
        if (board[x + dx[i]][y + dy[i]] != '*')
            return false;
    }

    return true;
}

int main()
{
    int h, w, starCounter = 0, plusStarCounter = 0;
    bool centerFound = false;

    cin >> h >> w;

    for (int i = 0; i < h; i++)
    {
        for(int j = 0 ; j < w; j++)
        {
            cin >> board[i][j];

        }
    }

    for (int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            if (board[i][j]  == '*')
            {
                starCounter ++;
                bool res = centerFinder(i, j);

                if(centerFound && res)
                {
                    cout << "NO" << endl;
                    return 0;
                }
                else if(res)
                {
                    centerFound = res;
                    c1 = i; c2 = j;
                }

            }

        }
    }

    if (!centerFound)
    {
        cout << "NO" << endl;
        return 0;
    }

    dfs(c1,c2);

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (visited[i][j] == 1)
                plusStarCounter ++;
        }
    }

    if (starCounter == plusStarCounter)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;

    return 0;
}
