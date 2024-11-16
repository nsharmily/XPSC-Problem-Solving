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
        
        long long int n,m,h;
        cin>>n>>m>>h; 
        vector<long long int> cars(n),powers(m);
        
        for (int i=0; i<n; i++)
        {
            cin>>cars[i];
        }
        for (int i=0; i<m; i++)
        {
            cin>>powers[i];
        }
        sort(cars.begin(),cars.end(),greater<long long int>());
        sort(powers.begin(),powers.end(),greater<long long int>());

        long long int totalenergy=0;
        long long int pairs=min(n,m); 
        
        for (int i=0; i<pairs; i++) 
        {
            long long int energy=powers[i]*h;
            totalenergy+=min(cars[i],energy);
        }
        cout<<totalenergy<<'\n';
    }
    return 0;
}