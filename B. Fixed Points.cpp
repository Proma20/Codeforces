#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, arr[100005], ans = 0;
    bool swapFlag = false;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] == i) ans ++;
    }

    if (ans == n)
    {
        cout << ans << endl;
        return 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[arr[i]] == i && arr[i] != i)
        {
            ans += 2;
            swapFlag = true;
            break;
        }
    }

    if (!swapFlag) ans += 1;

    cout << ans <<endl;

    return 0;
}
