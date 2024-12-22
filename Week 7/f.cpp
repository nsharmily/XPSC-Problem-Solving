#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        long long int sum = 0;
        for (int i = 0; i < n; i++) 
        {
            sum += a[i];
        }
        int count = 0;
        for (int i = 0; i < n - 1; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                long long int remaining = sum - a[i] - a[j];
                if (remaining >= x && remaining <= y) 
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}