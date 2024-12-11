#include <iostream>
#include <vector>
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
        
        int count = 0; 
        for (int i = 0; i < n; i++) 
        {
            if (a[i] <= 2 * b[i] && b[i] <= 2 * a[i]) 
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}