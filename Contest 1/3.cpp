#include <bits/stdc++.h> 
using namespace std;

int main() 
{
    int t;  
    cin>>t;

    while (t--) 
    {
        int n,x;
        cin>>n>>x;
        int coins=0;

        for (int i=n; i>n-x; i--) 
        {
            coins+=pow(2,i);
        }

        for (int i=1; i<=n-x; i++)
        {
            coins-=pow(2,i);
        }
        cout<<coins<<endl;
    }
    return 0;
}