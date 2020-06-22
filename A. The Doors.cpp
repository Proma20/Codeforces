#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, one = 0 , zero = 0, arr[200005];

    cin >> n;

    for( int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if( arr[i] == 0) zero++;
        else one++;
    }

    for( int i = 0; i < n; i++)
    {
        if( arr[i] == 0 ) zero--;
        else one--;

        if( zero == 0 || one == 0){
            cout << i+1 <<endl;
            break;
        }
    }
    return 0;
}
