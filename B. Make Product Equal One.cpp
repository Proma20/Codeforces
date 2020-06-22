#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, arr[100005], zero = 0, neg = 0, pos = 0;
    long long int cost = 0;
    cin >> n;

    for( int i = 0; i < n; i++ )
    {
        cin >> arr[i];
        if( arr[i] < 0)
        {
            cost += abs(arr[i] + 1);
            neg ++;
        }
        else if( arr[i] > 0 )
        {
            cost += abs(arr[i] - 1);
            pos ++;
        }

        else
            zero ++;
    }

    if ( zero == 0 )
    {
        if( neg % 2 == 0) cout << cost <<endl;

        else cout << cost + 2 << endl;
    }
    else if( zero != 0 )
    {
        cout << cost + zero <<endl;
    }

    return 0;
}
