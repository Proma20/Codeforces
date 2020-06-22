#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, odd = 0;
    long long int sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;

        cin >> val;

        sum += val;
        if (val % 2 != 0 && odd == 0) odd = 1;

    }

    if (sum % 2 != 0) cout << "First" << endl;

    else if (odd == 1) cout << "First" << endl;

    else cout << "Second" << endl;

    return 0;
}
