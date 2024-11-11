#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        if(n%2==0)
        {
            if(n*x>=(n/2)*y)
            {
                cout<<n*x<<endl;
            }
            else
            {
                cout<<(n/2)*y<<endl;
            }
        }
        else
        {
            int nn=n-1;
            if(nn*x>=(nn/2)*y)
            {
                cout<<(nn*x)+x<<endl;
            }
            else
            {
                cout<<((nn/2)*y)+x<<endl;
            }
        }
    }
    return 0;
}