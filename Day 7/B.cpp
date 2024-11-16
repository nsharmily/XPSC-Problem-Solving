#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--) 
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++) 
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());

        int value=INT_MAX;
        value=min(value,a[n-1]-a[2]);
        value=min(value,a[n-3]-a[0]);
        value=min(value,a[n-2]-a[1]);
        cout<<value<<'\n';
    }
    return 0;
}