#include<bits/stdc++.h>

using namespace std;

int main(){

    int x1,x2,y1,y2,x3,x4,y3,y4;
    cin>>x1>>y1>>x2>>y2;

    if(x1!=x2 && y1!=y2 && abs(x1-x2) !=abs(y1-y2))
    {
        cout<<-1<<endl;
        return 0;
    }
    else
    {
        if(x1==x2)
        {
            x3=x2+(y2-y1);
            x4=x3;
            y3=y1;
            y4=y2;
        }
        else if(y1==y2)
        {
            y3=y2+(x2-x1);
            y4=y3;
            x3=x1;
            x4=x2;
        }
        else
        {
            x3=x1;
            y3=y2;
            x4=x2;
            y4=y1;
        }
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    return 0;
}
