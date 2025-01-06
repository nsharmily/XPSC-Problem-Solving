#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        long long int x, y;
        cin >> x >> y;
        if (x == 1) 
        {
            cout << 0 << endl;
        } 
        else 
        {
            cout << y / (x - 1) << endl;
        }
    }
    return 0;
}