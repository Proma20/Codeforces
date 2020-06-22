#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    string s;
    vector<int>divisor;

    cin >> n >> s;

    for( int i = 2; i <= n ; i++ )
    {
        if( n % i == 0 ) divisor.push_back(i);
    }

    for( int i = 0 ; i < divisor.size(); i++)
    {
        reverse( s.begin(), s.begin() + divisor[i]);
    }

    cout << s << endl;

    return 0;
}
