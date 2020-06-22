#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while( testCase != 0)
    {
        testCase--;

        long long int pile1, pile2, pile3;

        cin >> pile1 >> pile2 >> pile3 ;
        cout << (pile1 + pile2 + pile3) / 2 << endl;
    }
    return 0;
}
