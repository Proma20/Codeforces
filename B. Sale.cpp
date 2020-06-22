#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, counter = 0, money = 0, price [105];
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }

    sort(price, price + n);

    for (int i = 0; i < n; i++)
    {
        if (price[i] <= 0)
        {
            money += price[i]* (-1);
            counter++;
            if (counter == m)
                break;
        }
    }

    cout << money << endl;

    return 0;
}
