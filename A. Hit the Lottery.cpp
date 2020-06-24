#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int bill[] = {100, 20, 10, 5, 1};

    long long int n, counter = 0 ;
    cin >> n;
    for(int i=0;i<5;i++){

        if(n < bill[i])
            continue;
        counter+= n/ bill[i];
        int temp = n/bill[i];
        n-= temp*bill[i];

        if(n==0)
            break;
    }

    cout<<counter<< endl;
    return 0;
}
