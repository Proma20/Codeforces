#include<bits/stdc++.h>

using namespace std;


int main()
{
    string s;
    int temp=-1,temp1=-1;
    cin>>s;
    temp = s.find("AB");
    temp1=s.find("BA",temp+2);
   //  cout<<temp<<" "<<temp1<<endl;
    if(temp!=-1 && temp1!=-1)
    {
        cout<<"YES"<<endl;
       // cout<<temp<<" "<<temp1<<endl;
        return 0;
    }
    temp = s.find("BA");
    temp1=s.find("AB",temp+2);
  //  cout<<temp<<" "<<temp1<<endl;
     if(temp!=-1 && temp1!=-1)
    {
        cout<<"YES"<<endl;
       // cout<<temp<<" "<<temp1<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
