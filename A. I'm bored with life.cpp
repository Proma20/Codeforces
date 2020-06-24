#include<bits/stdc++.h>

using namespace std;



int fact(int n){

  if(n==1)
    return 1;

    return n *  fact(n-1);

}

int main()
{
    int a,b;
    cin>>a>>b;
    int output = fact(int(min(a,b)));

    cout<<output<<endl;
    return 0;
}
