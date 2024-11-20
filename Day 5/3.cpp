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

        int maximum = *max_element(a.begin(), a.end());  

        int flag = 0;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] == maximum) 
            {
                continue; 
            }
            if (max(a[i], b[i]) > maximum) 
            {
                flag = 1; 
                break;
            }
        }

        if (flag == 1) 
        {
            cout << "Yes" << endl;
        } 
        else 
        {
            cout << "No" << endl;
        }
    }

    return 0;
}