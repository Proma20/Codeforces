#include<bits/stdc++.h>

using namespace std;

int main(){

    int n , a[100005], b[100005], ind1=-1, ind2=-1,flag=0;
    cin >> n;

    for(int i=0;i<n;i++){
         cin>>a[i];
         b[i] = a[i];

    }


     sort(b,b+n);

     for(int i=0;i<n;i++){

        if(b[i]!=a[i]){
            ind1 =i;
            break;
        }
    }
    if(ind1 == -1)
    {
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
        return 0;
    }
    for( int i=ind1 + 1 ;  i < n-1 ; i++){
        if(a[i+1] > a[i])
        {
            ind2 = i;
            break;
        }
    }
    if( ind2 == -1)
        ind2= n-1;

    for(int i = ind1, j= ind2, cont = 1 ; cont <= ((ind2-ind1)+1)/2  ; i++ , j--, cont++){
        int temp;
        temp =  a[i];
        a[i] = a[j];
        a[j] = temp;

    }

   // cout<<ind1<<" "<<ind2<<endl;

    for(int i = 0 ; i < n ; i ++){
        if(a[i]!=b[i] )
            {
                flag = 1;
             //  cout<<a[i]<<" "<<b[i]<<endl;
              //  cout<<i<<endl;
                break;
            }

    }

    if(flag == 1)
        cout<<"no"<<endl;
    else
        {
            cout<<"yes"<<endl;
            cout<<ind1+1<<" "<<ind2+1<<endl;
        }

    return  0;
}
