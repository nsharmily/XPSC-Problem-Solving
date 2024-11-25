#include "./stdc++.h"
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
        sort(a.begin(),a.end());
        int cursed=0;
        long long int total=0;
        for (int i=0; i<n; i++) 
        {
            if (total<a[i])
            {
                total+=a[i];
            } 
            else 
            {
                cursed++;
            }
        }
        cout<<cursed<<endl;
        for (int i=0; i<n; i++) 
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}