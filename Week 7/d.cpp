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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i]; 
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i]; 
        }
        int m = 0, s = 0;
        for (int i = 0; i < n; i++) 
        {
            if (i < n - 1 && a[i] - b[i + 1] > 0) 
            {
                m += a[i];
                s += b[i + 1];
            } 
            else if (i == n - 1) 
            {
                m += a[i];
            }
        }
        cout << m - s << endl;
    }
    return 0;
}