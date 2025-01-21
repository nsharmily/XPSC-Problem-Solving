#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main() 
{
    int t;
    cin >> t; 
    while (t--) 
    {
        int n, m;
        cin >> n >> m; 
        string a, b;
        cin >> a >> b;
        int x = n - m, hamming = m; 
        for (int i = 0; i <= x; i++) 
        {
            int current = 0;
            for (int j = 0; j < m; j++) 
            {
                if (a[i + j] != b[j]) 
                {
                    current++;
                }
            }
            hamming = min(hamming, current);
        }
        cout << hamming << endl;
    }
    return 0;
}