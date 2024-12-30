#include "./stdc++.h"
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        int flag = 0;
        for (int i = 0; i * 3 <= n; i++) 
        {
            if ((n - i * 3) % 4 == 0) 
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}