#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, groups = 0;
    bool flag = true;
    vector<int>siblings[105];

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int e1, e2;

        cin >> e1 >> e2;

        siblings[e1].push_back(e2);
        siblings[e2].push_back(e1);
    }

    while (flag)
    {
        flag = false;
        vector<int>rep;
        for (int i = 1; i <= n; i++)
        {
            if (siblings[i].size() == 1)
            {
                flag = true;
                rep.push_back(i);
            }
        }

        if (flag)
            groups++;
        for (int i = 0; i < rep.size(); i++)
        {
            int j = rep[i];
            vector<int>::iterator position = find(siblings[siblings[j][0]].begin(), siblings[siblings[j][0]].end(), j);

            if (position != siblings[siblings[j][0]].end())
                siblings[siblings[j][0]].erase(position);

            siblings[j].clear();
        }
    }



    cout << groups << endl;

    return 0;
}
