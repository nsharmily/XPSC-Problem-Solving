#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t; 
    while (t--) 
    {
        long long int n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;
        long long int inversion = 0, count = 0;
        for (long long int i = 0; i < n; i++) 
        {
            if (s[i] == '1') 
            {
                count += 1;
            } 
            else 
            {
                inversion += count;
            }
        }
        if (inversion <= x && inversion % k == 0) 
        {
            cout << 1 << endl; 
        } 
        else 
        {
            cout << 2 << endl;  
        }
    }
    return 0;
}