#include<bits/stdc++.h>

using namespace std;

int edge[30005];

bool canReach(int root, int dest)
{
    if (root == dest) return true;

    else if( dest < root) return false;

    canReach(edge[root], dest);
}

int main()
{
    int n, dest;
    cin >> n >> dest;

    for (int i = 1; i < n; i++)
    {
        int a;
        cin>> a;
        edge[i] = i + a;
    }

    if (canReach(1, dest)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
