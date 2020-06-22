#include<bits/stdc++.h>

using namespace std;

int visited[100005], cost[100005];
vector<int>adjacent[100005];
int minCost;

void dfs(int root)
{
    if (visited[root] == 1) return;

    visited[root] = 1;
    minCost = min(minCost, cost[root]);

    for (int i = 0; i < adjacent[root].size(); i++)
    {
        dfs(adjacent[root][i]);
    }
}

int main()
{
    long long totalCost = 0;
    int n, m;

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> cost[i];
    }

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        adjacent[x].push_back(y);
        adjacent[y].push_back(x);
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0 )
        {
            minCost = INT_MAX;
            dfs(i);
            totalCost += minCost;
        }

    }

    cout << totalCost << endl;

    return 0;
}
