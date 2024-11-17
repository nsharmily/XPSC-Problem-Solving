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
        sort(a.begin(), a.end()); 
        int score = 0;
        int count = 1; 
        for (int i = 1; i < n; i++) 
        {
            if (a[i] == a[i - 1])
            {
                count++;
            } 
            else 
            {
                score += count / 2; 
                count = 1; 
            }
        }
        score += count / 2; 
        cout << score << endl;
    }
    return 0;
}