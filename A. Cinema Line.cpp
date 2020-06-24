#include<bits/stdc++.h>

using namespace std;

map<int,int> hit;

int main()
{
    int n,a[100005],temp,flag=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        hit[temp]++;
        if(temp==50)
        {
            if(hit[25]>=1)
            {
                hit[25]--;
                continue;
            }
            flag=1;
        }
        else if(temp==100)
        {
            if(hit[50]>=1 && hit[25]>=1)
            {
                hit[50]--;
                hit[25]--;
                continue;
            }
            else if( hit[25]>=3)
            {
                hit[25]-=3;
                continue;
            }
            flag=1;
        }

    }
    if(flag==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
