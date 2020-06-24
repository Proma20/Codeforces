#include<bits/stdc++.h>

using namespace std;



int main()
{
    string s, output;

    cin>>s;
    for(int i=0;i<s.length();i++){
        int temp = s[i]-48;
        char tempChar='\0';

        if((i == 0 && temp == 9) || temp<5)
            output.push_back(s[i]);
        else
        {
            tempChar = (9-temp)+48;
            output.push_back(tempChar);
        }
    }
    cout<<output<<endl;
    return 0;
}
