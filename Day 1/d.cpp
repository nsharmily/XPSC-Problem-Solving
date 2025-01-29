#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    string p[6] = {"RGB", "RBG", "GRB", "GBR", "BRG", "BGR"};
    while (t--) 
    {
        int n;
        string s;
        cin >> n >> s;
        int minimum = INT_MAX;
        for (int i = 0; i < 6; ++i) 
        {
            int changes = 0;
            for (int j = 0; j < n; ++j) 
            {
                if (s[j] != p[i][j % 3]) 
                {
                    changes++;
                }
            }
            minimum = min(minimum, changes);
        }
        cout << minimum << endl;
    }
    return 0;
}