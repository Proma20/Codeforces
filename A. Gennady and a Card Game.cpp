#include <bits/stdc++.h>

using namespace std;

int main(){
    string table,h1,h2,h3,h4,h5;

    cin>>table; cin>>h1; cin>>h2; cin>>h3; cin>>h4; cin>>h5;

    if((table[0]==h1[0] || table[0]==h2[0] || table[0]==h3[0] || table[0]==h4[0] || table[0]==h5[0]) || (table[1]==h1[1] || table[1]==h2[1] || table[1]==h3[1] || table[1]==h4[1] || table[1]==h5[1]) )
    {
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;
    return 0;

}
