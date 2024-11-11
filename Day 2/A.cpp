#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,m;
    cin>>x>>n>>m;
    if(x>n || x==n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(n-x<=m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}