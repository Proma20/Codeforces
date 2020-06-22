#include<bits/stdc++.h>

using namespace std;

int main()
{
    int query;

    cin>> query;

    while(query != 0)
    {
        query--;

        int n, sum = 0;
        cin >> n;

        for( int i = 0 ; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }

        if( sum % n == 0) cout << sum / n <<endl;
        else cout << (sum / n) +1 << endl;

    }
    return 0;
}
