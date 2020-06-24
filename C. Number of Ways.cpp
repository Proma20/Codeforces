#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, hit[5*100005] ;
    long long int a[5*100005],sum=0,ans,temp;
    cin>>n;

    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
    if(sum%3!=0)
    {
        cout<<0<<endl;
        return 0;
    }
    sum/=3;
    temp=0;
    for(int i=n-1;i>1;i--)
    {
        temp+=a[i];
        if(temp==sum)
        {
            ans++;
        }
    }
    return 0;
}
