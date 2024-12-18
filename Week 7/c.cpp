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
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        int cost = 0;

        for (int i = 0; i < n; i++) 
        {
            cost += max(a[i] - i, 0); 
        }
        cout << cost << "\n";
    }
    return 0;
}