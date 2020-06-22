#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    bool dash = false;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if( s[i] == '.' && !dash ) cout << 0;
        else if( s[i] == '-' && !dash) dash = true;
        else if( dash && s[i] == '.' )
        {
            cout << 1;
            dash = false;
        }
        else
        {
            cout << 2;
            dash = false;
        }
    }

    cout << endl;
    return 0;
}
