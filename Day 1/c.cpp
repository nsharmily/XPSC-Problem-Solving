#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> p[i];
        }

        vector<vector<int>> v(32);

        for (int i = 0; i < n; i++) 
        {
            int value = p[i], w = 0;
            while (value > 0) 
            {
                value &= (value - 1);  
                w++;
            }
            v[w].push_back(i);
        }

        for (int w = 0; w < 32; w++) 
        {
            if (!v[w].empty()) 
            {
                vector<int> val;
                for (int x : v[w]) 
                {
                    val.push_back(p[x]);
                }
                sort(val.begin(), val.end());
                for (int j = 0; j < v[w].size(); j++)
                {
                    p[v[w][j]] = val[j];
                }
            }
        }

        bool sorted = true;
        for (int i = 1; i < n; i++) 
        {
            if (p[i] < p[i - 1]) 
            {
                sorted = false;
                break;
            }
        }

        if (sorted) 
        {
            cout << "Yes\n";
        } 
        else 
        {
            cout << "No\n";
        }
    }
    return 0;
}