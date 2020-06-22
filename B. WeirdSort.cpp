#include<bits/stdc++.h>

using namespace std;

int destinationArray[105], visited[105];
vector<int>siblings[105];

void dfs( int root)
{
    if (visited[root] == 1) return;

    visited[root] = 1;

    for (int i = 0; i < siblings[root].size(); i++)
    {
        dfs(siblings[root][i]);
    }
}

void clearVisited()
{
    for (int i = 0; i < 105; i++)
    {
        visited[i] = 0;
    }
}

void clearDataStructures()
{
    for (int i = 0; i < 105; i++)
    {
        siblings[i].clear();
        destinationArray[i] = 0;
    }
}

int main()
{
    int testCase;

    cin >> testCase;

    while (testCase != 0)
    {
        testCase --;

        int n, m;
        int arr[105], p[105], sortedArray[105];
        bool ansFound = false;

        cin >> n >> m;

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            sortedArray[i] = arr[i];
        }

        for (int i = 1; i <= m; i++)
        {
            cin >> p[i];
            siblings[p[i]].push_back(p[i] + 1);
            siblings[p[i] + 1].push_back(p[i]);
        }

        sort(sortedArray + 1, sortedArray + n + 1);

        for (int i = 1; i <= n; i++)
        {
            int destination = lower_bound(sortedArray + destinationArray[arr[i]] + 1, sortedArray + n + 1, arr[i]) - sortedArray;

            destinationArray[arr[i]] = destination;

            if (destination == i)
                continue;

            dfs(i);



            if (visited[destination] == 0)
            {
                cout << "NO" <<endl;
                ansFound = true;
                break;
            }

            clearVisited();
        }

        if (!ansFound)
            cout << "YES" <<endl;

        clearVisited();
        clearDataStructures();

    }
}
