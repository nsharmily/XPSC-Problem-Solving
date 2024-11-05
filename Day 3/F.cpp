#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while (t--) 
    {
        int n;
        cin>>n;
        string r1, r2;
        cin>>r1>>r2;
        int same=1;
        for (int i=0; i<n; i++) 
        {
            if (r1[i]==r2[i] || (r1[i]=='G' && r2[i]=='B') || (r1[i]=='B' && r2[i]=='G')) 
            {
                continue;
            } 
            else
            {
                same=0;
                break;
            }
        }

        if (same==1)
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