#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string, string>ipNameMap;
    int n, m;
    string ans[1005];
    cin >> n >> m;

    for( int i = 0; i < n; i++ )
    {
        string name, ip;
        cin >> name >> ip;
        ip += ";";
        ipNameMap[ip] = name;
    }
    for ( int i = 0; i < m; i++ )
    {
        string command, ip;
        cin >> command >> ip;
        ans[i] = command + " " + ip + " " + "#" +ipNameMap[ip];

    }

    for( int i =0 ; i < m; i++ )
    {
        cout << ans[i] <<endl;
    }
    return 0;
}
