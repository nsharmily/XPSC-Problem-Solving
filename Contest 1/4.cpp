#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t; 

    for(int i=1; i<=t; i++)
    {
        int x;
        cin>>x;
        int payback=(100-x)/10;
        cout<<payback*10<<endl;   
    }
    return 0;
}
