#include "./stdc++.h"
using namespace std;

int main() 
{
    int t;
    cin >> t; 
    while (t--) 
    {
        int x, y, k;
        cin >> x >> y >> k;
        int a = x, b = y;
        while (a != b) 
        {
            if (a > b)
                a -= b;
            else
                b -= a;
        }
        int gcd = a;
        int lcm = (x / gcd) * y;

        if (k == 1) 
        {
            int p = gcd + y; 
            int q = x + lcm; 
            cout << min(p , q) << endl;
        } 
        else 
        {
            cout << 2 * gcd << endl;
        }
    }
    return 0;
}