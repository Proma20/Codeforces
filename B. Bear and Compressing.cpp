#include<bits/stdc++.h>

using namespace std;

int result;
map<char,vector<string>>OperationMap;

void extendString(string s, int n, int strLen)
{
    if (strLen == n)
    {
        result++;
        return;
    }

    int len = OperationMap[s[0]].size();
    for (int i = 0; i < len; i++)
    {
        extendString(OperationMap[s[0]][i], n, strLen + 1);
    }
}

int main()
{
    int n, q;
    string b;
    cin >> n >> q;

    for (int i = 0; i < q; i++)
    {
        string s;
        cin >> s >> b;
        OperationMap[b[0]].push_back(s);
    }

    int len = OperationMap['a'].size();
    for (int i = 0; i < len; i++)
    {
        extendString(OperationMap['a'][i], n, 2);
    }

    cout << result << endl;

    return 0;
}
