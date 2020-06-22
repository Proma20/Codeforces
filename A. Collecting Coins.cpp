#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while( testCase != 0 ){
        int a,b,c,n;
        cin>> a; cin>> b; cin>> c; cin>> n;

        if(a == b && b == c && n % 3 == 0){
            cout << "YES" << endl;
        }
        else{
            int maximum = max(a, max(b,c));

            if( maximum != a ) n -= maximum - a;
            if( maximum != b ) n -= maximum - b;
            if( maximum != c ) n -= maximum - c;

            if( n >=0 && n%3 == 0) cout << "YES" << endl;
            else cout << "NO" << endl;

        }


        testCase--;
    }


    return 0;
}
