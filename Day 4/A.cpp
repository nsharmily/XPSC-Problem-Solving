#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int played=x+y+z;
    int remaining=4-played;
    double tscore=(x*1.0)+(y*0.5)+(z*0.0);
    double oscore=played-tscore;
    double maxscore=tscore+remaining;
    if (maxscore>oscore)
    {
        cout<<"YES"<<endl;
    } 
    else 
    {
        cout<<"NO"<<endl;
    }
    return 0;
}