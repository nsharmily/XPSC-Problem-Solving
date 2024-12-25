#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t; 
    
    while (t--) 
    {
        int h, l, w;
        cin >> h >> l >> w; 
        int area = 2 * ((h * l) + (l * w) + (w * h));
        cout << 1000 / area << endl;
    }
    return 0;
}