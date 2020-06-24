#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, k, a[505], b[505], sum = 0, temp;
    cin >> n; cin >> k;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        b[i] = a[i];
        if(i == n-1)
            continue;
        if(a[i]+ a[i+1]< k){
            sum += k - (a[i]+ a[i+1]);
            a[i+1] = k - a[i];

            //cout<<"sum"<<sum<<endl;
        }

    }
    cout << sum <<endl;
    for(int i=0;i<n;i++){
        cout << b[i] << " ";
    }
    cout<<endl;
    return 0;
}
