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
        vector<int> a(n); 
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        vector<int> result; 
        int score = 0; 
        for (int i = 0; i < n; i++) 
        {
            if (a[i] > score) 
            {
                result.push_back(1); 
                score = a[i]; 
            } 
            else 
            {
                result.push_back(0); 
            }
        }
        for (int i = 0; i < n; i++) 
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}