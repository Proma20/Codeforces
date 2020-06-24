#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a[5005], b[5005],flag = 0 , maxm, temp, temp1, tempArr[5005];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        cin >> b[i];
        tempArr[i] = b[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                temp1 = b[i];
                b[i] = b[j];
                b[j] = temp1;
            }
        }
    }
    sort(tempArr, tempArr+n);
    for(int i=0; i<n; i++){
        if(tempArr[i] != b[i]){
            maxm = a[i];
            flag = 1;
            //cout<< maxm <<endl;
        }

    }
    if(flag == 0)
        cout <<b[n-1] << endl;
    else
        cout <<maxm << endl;
    return 0;
}
