#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase != 0)
    {
        testCase--;

        int x, y, a;
        bool ans = false;
        cin >> x >> y;

        a = x;
        while (true)
        {

            if ( a >= y )
            {
                cout << "Yes" <<endl;
                break;
            }
            else if (a == 3 || a == 1)
            {
                cout << "NO" << endl;
                break;
            }
            else
            {
                if (a % 2 == 0)
                {
                    a /= 2;
                    a *= 3;
                }
                else
                    a -= 1;
            }

        }

    }
    return 0;
}
