#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,k,arr[200001], sum[200001], minm = INT_MAX, res;
    cin >> n; cin >> k;
    for(int i = 0; i < n ;i++ ){
        cin >> arr[i];
    }

    sum [n-1] = arr [n-1];
    for (int i = n-2 ; i >= 0 ; i--){
        sum[i] = arr[i] + sum[i+1];
        if(i+k <= n-1)
        {
            sum[i] -= arr[i+k];

        }

    }

    for(int i = 0; i < n; i++){
        if(minm > sum[i] && (i+k) <= n )
        {
            res = i+1;
            minm = sum[i];
        }
    }

    cout << res << endl;
    return 0;
}


