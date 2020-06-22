#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase != 0)
    {
      testCase--;

      int h, m;

      cin >> h >>m;

      cout << 1440 - (60* h + m) << endl;
    }
    return 0;
}
