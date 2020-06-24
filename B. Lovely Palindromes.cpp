#include<bits/stdc++.h>

using namespace std;

int main(){

    string s,temp;
    cin >> s;
    temp = s;
    reverse(s.begin(),s.end());
    cout<< temp+s <<endl;

    return 0;
}
