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

        vector<int> initial_sequence(n);
        
        for (int i=0; i<n; i++) 
        {
            int b;
            string moves;
            cin>>b>>moves;

            int up_moves=0, down_moves=0;

            for (char move : moves) 
            {
                if (move=='U')
                { 
                    up_moves++;
                }
                else if (move=='D')
                { 
                    down_moves++;
                }
            }
            int x=(up_moves-down_moves+10)%10;
            initial_sequence[i]=(a[i]-x+10)%10;
        }

        for (int digit : initial_sequence) 
        {
            cout<<digit<<" ";
        }
        cout<<endl;
    }
    return 0;
}