#include<bits/stdc++.h>

using namespace std;

int a[200005];

int main()
{
    int b, x, n;

    x = 0;
    a[0] = -1;

    cin>> n;

    for(int i = 1 ; i <= n; i++){
        cin >> b;
        x = max(x, a[i-1]);
        a[i] = b + x;
    }

    for(int i = 1 ; i <= n; i++){
        cout << a[i] << " ";
    }

    cout << endl;


    return 0;
}
