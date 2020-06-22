#include<bits/stdc++.h>

using namespace std;

vector<pair<int, int>>emptyCells;
char board[5][5];

bool checkForHorizontal(int x, int y)
{
        return (y + 2 < 4 && board[x][y + 1] == 'x' && board[x][y + 2] == 'x')
            || ( y - 2 >= 0 && board[x][y - 1] == 'x' && board[x][y - 2] == 'x')
            || ( y - 1 >= 0 && y + 1 < 4 && board[x][y - 1] == 'x' && board[x][ y + 1] == 'x');
}

bool checkForVertical(int x, int y)
{
        return (x + 2 < 4 && board[x + 1][y] == 'x' && board[x + 2][y] == 'x')
            || ( x - 2 >= 0 && board[x - 1][y] == 'x' && board[x - 2][y] == 'x')
            || ( x - 1 >= 0 && x + 1 < 4 && board[x - 1][y] == 'x' && board[x + 1][y] == 'x');
}

bool checkForDiagonal(int x, int y)
{
    return (x + 2 < 4 && y + 2 < 4 && board[x + 1][y + 1] == 'x' && board[x + 2][y + 2] == 'x')
            || (x - 2 >= 0 && y - 2 >= 0 && board[x - 1][y - 1] == 'x' && board[x - 2][y - 2] == 'x')
            || (x + 2 < 4 && y - 2 >= 0 && board[x + 1][y - 1] == 'x' && board[x + 2][y - 2] == 'x')
            || (x - 2 >= 0 && y + 2 < 4 && board[x - 1][y + 1] == 'x' && board[x - 2][y + 2] == 'x')
            || ( x - 1 >= 0 && x + 1 < 4 && y - 1 >= 0 && y + 1 < 4 && board[x - 1][y - 1] == 'x' && board[x + 1][y + 1] == 'x')
            || ( x - 1 >= 0 && x + 1 < 4 && y - 1 >= 0 && y + 1 < 4 && board[x - 1][y + 1] == 'x' && board[x + 1][y - 1] == 'x');
}

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> board[i][j];
            if( board[i][j] == '.')
                emptyCells.push_back(make_pair(i, j));
        }
    }

    for (int i = 0; i < emptyCells.size(); i++)
    {
        if (checkForHorizontal(emptyCells[i].first, emptyCells[i].second)
            || checkForVertical(emptyCells[i].first, emptyCells[i].second)
            || checkForDiagonal(emptyCells[i].first, emptyCells[i].second))
        {
            cout << "YES" <<endl;
            return 0;
        }

    }

    cout << "NO" <<endl;

    return 0;
}
