#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin>>n;
        vector<int> a(n);
        set<int> x; 

        for (int i=0; i<n; i++) 
        {
            cin>>a[i];
            if (a[i]>0) 
            {
                x.insert(a[i]);
            }
        }

        if (x.size()<=1) 
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