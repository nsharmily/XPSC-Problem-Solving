#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;  
    while (t--) 
    {
        int n;
        cin >> n; 
        if(n == 2)
        {
            cout << n / 2 << endl;
        }
        else
        {
            int x = n % 4;
            int n2 = n - x;
            cout << (n2 / 4) + (x / 2) << endl;
        }
    }
    return 0;
}