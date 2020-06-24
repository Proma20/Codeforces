#include<bits/stdc++.h>

using namespace std;

int hit[100005],dist[100005];
int main()
{
    int n,a[100005],temp,m;
    cin>> n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    dist[n]=1;
    hit[a[n]]=1;
    for(int i=n-1;i>0;i--)
    {
        if(hit[a[i]]==0)
        {
            hit[a[i]]=1;
            dist[i]=dist[i+1]+1;
        }
        else
            dist[i]=dist[i+1];
    }
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        cout<<dist[temp]<<endl;
    }
    return 0;
}
