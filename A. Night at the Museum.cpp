#include<bits/stdc++.h>

using namespace std;



int main()
{
    string s;
    cin>>s;
    int cont=0;
    char tc='a';
    for(int i=0;i<s.length();i++)
    {
        int a,b;
        a=tc;
        b=s[i];
       if(abs(a-b)>13)
            cont+=(26-abs(a-b));
       else
            cont+=abs(a-b);
        tc=s[i];
    }
    cout<<cont<<endl;

    return 0;
}

