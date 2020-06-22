#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while( testCase != 0 )
    {
        testCase--;
        int n, totalSpend = 0, spend;

        cin >> n;

        while( n % 10 != n)
        {
            if( n % 10 == 0 ) spend = n;
            else if ( ( 10 - ( n %10 ) ) *10 < n ) spend = ( 10 - ( n %10 ) ) *10;
            else spend = n % 10;

            n -= spend;
            n += spend/10;
            totalSpend += spend;

        }

        totalSpend += n;

        cout << totalSpend << endl;
    }
    return 0;
}
