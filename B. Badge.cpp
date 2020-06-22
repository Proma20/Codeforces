#include<bits/stdc++.h>

using namespace std;

int visited[1005];
int pairs[1005];

int dfs(int root)
{
    if( visited[root] == 1 ) return root;
    else
    {
        visited[root] = 1;
        return dfs(pairs[root]);

    }
}

void clearVisited()
{
    for( int i = 0 ; i < 1005; i++ )
    {
        visited[i] = 0;
    }
}

int main()
{
    int n;

    cin >> n;

    for( int i = 1; i <= n; i++ )
    {
        int pointsTo;
        cin >> pointsTo;

        pairs[i] = pointsTo;
    }

    for( int i = 1; i <= n ; i++ )
    {
        cout << dfs(i);

        if(i != n) cout << " ";
        else cout << endl;

        clearVisited();
    }
    return 0;
}
