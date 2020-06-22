#include<bits/stdc++.h>

using namespace std;

int visited[2005];
vector<int>v[2005];
int level[2005];
vector<int>boss;

void dfs(int root, int lvl)
{
    if(visited[root] != 0) return;

    visited[root] = 1;
    level[root] = lvl;

    for( int i = 0; i < v[root].size(); i++){
        dfs(v[root][i], lvl + 1);
    }

}

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++ )
    {
        int manager;
        cin >> manager;
        if(manager == -1)
            boss.push_back(i);
        else
            v[manager].push_back(i);
    }

    for( int i = 0; i < boss.size(); i++){
        dfs(boss[i], 1);
    }

    cout << *max_element(level, level + n + 1);

    return 0;
}
