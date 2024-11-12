#include "./stdc++.h"
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    double team=(x*1.0)+(y*0.5)+(z*0.0);
    int played=x+y+z;
    int remaining=4-played;
    double opponent=played-team;
    double max=team+remaining;
    if (max>opponent)
    {
        cout<<"YES"<<endl;
    } 
    else 
    {
        cout<<"NO"<<endl;
    }
    return 0;
}