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
        vector<int> a(n);
        for (int i=0; i<n; i++) 
        {
            cin>>a[i];
        }
        unordered_set<int> fq;
        int count=0;
        for (int i=n-1; i>=0; i--) 
        {
            if (fq.count(a[i])) 
            {
                break;
            }
            fq.insert(a[i]);
            count++;
        }
        cout<<n-count<<endl;
    }
    return 0;
}