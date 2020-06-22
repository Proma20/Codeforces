#include<bits/stdc++.h>

using namespace std;

int adjacent[2*100005], visited[2*100005], ans[2*100005], edge;

void clearDS()
{
    edge = 0;

    for (int i = 0; i < 2*100005; i++)
    {
        adjacent[i] = 0;
        visited[i] = 0;
    }
}

void dfs(int root, int parent)
{
    if (visited[root] == 1) return;

    visited[root] = 1;
    ans[root] = parent;
    edge ++;
    dfs(adjacent[root], parent);
}

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase != 0)
    {
        testCase--;

        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            adjacent[i] = val;
        }

        for (int i = 1; i <= n; i++)
        {
            if (visited[i] == 0)
            {
                dfs(i, i);
                visited[i] = edge;
                edge = 0;
            }

        }

        for (int i = 1; i <= n; i++)
        {
            cout << visited[ans[i]] << " ";
        }

        cout << endl;

        clearDS();
    }
    return 0;
}
