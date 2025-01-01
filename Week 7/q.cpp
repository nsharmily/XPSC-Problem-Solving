#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        long long int current = 0, seconds = 0;
        for (int i = 0; i < n; i++) 
        {
            current += a[i];
            seconds += abs(current);  
        }
        cout << seconds << endl;
    }
    return 0;
}