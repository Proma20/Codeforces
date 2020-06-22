#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t != 0)
    {
        t--;
        int n, x, odd = 0, even = 0;
        string ans = "No";
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 == 0) even++;
            else odd ++;
        }

        for (int i = 1; i <= odd && i <= x; i += 2)
        {
            if (even >= x - i)
            {
                ans = "Yes";
                break;
            }

        }

        cout << ans << endl;

    }
     return 0;
}
