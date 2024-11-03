#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n >>x;
    vector<int> a(n);
    vector<int> b;

    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        if (a[i]!=x) 
        {
            b.push_back(a[i]);
        }
    }
    
    for (int i=0; i<b.size(); i++) 
    {
        if (i > 0) 
        {
            cout<<" ";
        }
        cout<<b[i];
    }
    cout<<endl;  
    return 0;
}