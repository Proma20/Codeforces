#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string str)
{
    for ( int i = 0, j = str.length() - 1; i < str.length()/2; i++, j-- )
    {
        if( str[i] != str[j])
            return false;
    }

    return true;
}

int main()
{
    int testCase;
    cin >> testCase;

    while( testCase != 0)
    {
        testCase --;
        bool ans = false;
        string s;
        cin >> s;
        if (s.length() == 1)
        {
            cout << -1 <<endl;
            ans = true;
        }

        else if( !isPalindrome(s) )
        {
            cout << s << endl;
            ans = true;
        }

        else{
            for ( int i = 0; i < s.length(); i++)
            {
              if(s[0] != s[i]){
                char c = s[0];
                s[0] = s[i];
                s[i] = c;

                cout << s << endl;
                ans = true;
                break;
              }
            }
        }

        if( ans ) continue;
        else cout << -1 << endl;
    }
    return 0;
}
