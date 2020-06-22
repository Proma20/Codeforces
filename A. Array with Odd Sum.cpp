#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;

    cin >> testCase;

    while(testCase != 0){
        testCase--;
         int n, sum =0, odd = 0, even = 0;
         cin >> n;

         for( int i = 0 ; i < n; i++){
            int a;
            cin >> a;

            if( a % 2 != 0 && odd ==0 ) odd = a;
            else if( a % 2 == 0 && even ==0 ) even = a;

            sum += a;
         }

         if(sum % 2 != 0) cout << "YES" << endl;

         else{

            if( odd != 0 && even != 0) cout << "YES" << endl;

            else cout << "NO" << endl;

         }
    }
    return 0;
}
