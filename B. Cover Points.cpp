#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, minimumLength = -1;
    cin >> n;

    for( int i = 0; i < n; i++ )
    {
        int x, y;
        cin >> x >> y;

        minimumLength = max( minimumLength, x + y );
    }

    cout << minimumLength <<endl;

    return 0;
}
