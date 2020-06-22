#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, zero = 0, one = 0;
    string s;

    cin >> n >> s;

    for(int i = 0; i < n; i++)
    {
        if( s[i] == 'n' ) one++;
        else if( s[i] == 'z' ) zero++;
    }

    for( int i = 0 ; i < one; i++)
    {
        if ( i == 0)
            cout << 1;
        else
            cout<< " " << 1;
    }
    for( int i = 0 ; i < zero; i++)
    {
        if ( i == 0 && one == 0)
            cout << 0;
        else
            cout<< " " << 0;
    }

    cout << endl;

    return 0;
}
