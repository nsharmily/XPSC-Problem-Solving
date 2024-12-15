#include <bits/stdc++.h>  
using namespace std;

int main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        int m, a, b, c; 
        cin >> m >> a >> b >> c;
        int preference = 0;
        if (a <= m)
        {
            preference += a;
        }
        else 
        {
            preference += m;
        }
        if (b <= m)
        {
            preference += b;
        }
        else 
        {
            preference += m;
        }
        int remaining = (2 * m) - preference;
        int no_preference = 0;
        if (remaining <= c)
        {
            no_preference += remaining;
        }
        else 
        {
            no_preference += c;
        } 
        int total = preference + no_preference;
        cout << total << endl;
    }
    return 0;
}