#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;  
    while (t--) 
    {
        int m, k;
        cin >> m >> k;
        string s;
        cin >> s;
        int count = 0;
        for (char c : s) 
        {
            if (c == 'S') 
            {
                count++;
            }
        }
        if (count >= k) 
        {
            cout << m << endl; 
        } 
        else 
        {
            cout << (m + (k - count) - 1) << endl;  
        }
    }
    return 0;
}