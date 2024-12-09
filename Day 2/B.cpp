#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        int h, x, y;
        cin >> h >> x >> y;
        int x2 = 0;
        int w = 0;  
        for (int i = 1; i <= h; i++) 
        {
            x2 += x;
            if (x2 >= h) 
            {
                w = i; 
                break;
            }
        }
        int wo = 0; 
        if (h > y) 
        {
            int y2 = h - y;
            for (int i = 1; i <= h; i++) 
            {
                if (y2 <= x * i) 
                {
                    wo = i + 1;
                    break;
                }
            }
        } 
        else 
        {
            wo = 1;
        }
        cout << min(w, wo) << endl;
    }
    return 0;
}