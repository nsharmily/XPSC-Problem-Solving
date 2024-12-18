#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;  
    cin >> t;
    while (t--) 
    {
        int n, m, k;
        cin >> n >> m >> k;

        set<int> perimeter; 

        for (int i = 1; i <= n; i++) 
        {
            for (int j = 1; j <= m; j++) 
            {
                perimeter.insert(2 * (i + j));
            }
        }
        
        int min_difference = INT_MAX;
        
        for (int p : perimeter) 
        {
            int difference = abs(p - k);
            min_difference = min(min_difference, difference);
        }
        cout << min_difference << endl;
    }
    return 0;
}