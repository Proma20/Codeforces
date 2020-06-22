#include<bits/stdc++.h>

using namespace std;;

int evilRow[15], evilColumn[15];

int main()
{
    int r, c, cake = 0;
    char grid[15][15];

    cin >> r >> c;

    for( int i = 1; i<= r; i++ )
    {
        for( int j = 1; j <= c; j++ )
        {
            cin >> grid[i][j];

            if(grid[i][j] == 'S'){
                evilRow[i] = 1; evilColumn[j] = 1;
            }
        }
    }

    for( int i = 1; i<= r; i++ )
    {
        if( evilRow[i] == 1 ) continue;
        for( int j = 1; j <= c; j++ )
        {

            if(grid[i][j] == '.')
            {
                cake ++;
                grid[i][j] = 'e';
            }
        }
    }

    for( int i = 1; i<= c; i++ )
    {
        if( evilColumn[i] == 1 ) continue;
        for( int j = 1; j <= r; j++ )
        {

            if(grid[j][i] == '.')
            {
                cake ++;
                grid[j][i] = 'e';
            }
        }
    }


    cout << cake <<endl;

    return 0;
}
