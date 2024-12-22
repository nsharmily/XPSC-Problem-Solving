#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        long long int n, a, b, c;
        cin >> n >> a >> b >> c;
        long long int distance = n - (n / (a + b + c)) * (a + b + c); 
        if (distance <= 0) 
        {
            cout << 3 * (n / (a + b + c)) << endl;
        } 
        else if (distance <= a) 
        {
            cout << 3 * (n / (a + b + c)) + 1 << endl;
        } 
        else if (distance <= a + b) 
        {
            cout << 3 * (n / (a + b + c)) + 2 << endl;
        } 
        else 
        {
            cout << 3 * (n / (a + b + c)) + 3 << endl;
        }
    }
    return 0;
}