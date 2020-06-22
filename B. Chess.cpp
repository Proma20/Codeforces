#include<bits/stdc++.h>

using namespace std;

int board[9][9];
int dirX[] = {-2, -2, 2, 2, -1, 1, -1, 1}, dirY[] = {-1, 1, -1, 1, -2, -2, 2, 2};

int knightMove(char x, char y, char comp1, char comp2)
{
    int cell = 0;
    for (int i = 0; i < 8; i++)
    {
        if (((x - 97) + dirX[i]) >= 0 && ((x - 97) + dirX[i]) <= 7 && ((x - 97) + dirX[i]) != (comp1 - 97)
             && ((y - 49) + dirY[i]) >= 0 && ((y - 49) + dirY[i]) <= 7 && ((y - 49) + dirY[i]) != (comp2 - 49))
        {
            board[(x - 97) + dirX[i]][(y - 49) + dirY[i]] = 1;
            cell++;
        }
    }

    return cell;
}

int rookDiagon(char x, char y)
{
    int cell = 0;
    for (int i = 0; i < 8; i++)
    {
        if (((x - 97) + dirX[i]) >= 0 && ((x - 97) + dirX[i]) <= 7
             && ((y - 49) + dirY[i]) >= 0 && ((y - 49) + dirY[i]) <= 7 && board[(x - 97) + dirX[i]][(y - 49) + dirY[i]] != 1)
        {
            cell ++;
        }
    }

    return cell;
}

int main()
{
    string rook, knight;
    int ans = 48;

    cin >> rook >> knight;
    board[rook[0] - 97][rook[1] - 49] = 1;
    board[knight[0] - 97][knight[1] - 49] = 1;

    ans -= (knightMove(knight[0], knight[1], rook[0], rook[1]) + rookDiagon(rook[0], rook[1]));

    cout << ans << endl;

    return 0;
}
