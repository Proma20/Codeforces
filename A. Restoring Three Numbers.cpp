#include<bits/stdc++.h>

using namespace std;

int main(){
    int x1, x2, x3, x4, a, b, c, t1, t2, t3, maxm;
    cin >> x1 >> x2 >> x3 >> x4;
    maxm = max(max(max(x1,x2),x3),x4);
    if(maxm == x1){ t1 = x2; t2 = x3; t3 = x4;}
    else if(maxm == x2){ t1 = x1; t2 = x3; t3 = x4;}
    else if(maxm == x3){ t1 = x1; t2 = x2; t3 = x4;}
    else { t1 = x1; t2 = x2; t3 = x3;}

    a = ((t1+t2) - t3)/2;
    b = t1 - a;
    c = t2 - a;
    cout<< a <<" "<<b<<" "<<c<< endl;
    return 0;
}
