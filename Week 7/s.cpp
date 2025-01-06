#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int x;
        cin >> x;

        int gift = 1;
        int budget = 0;
        int flag = 1;

        for (int i = 0; i < 7; i++) 
        {
            budget += gift;
            if (budget > x) 
            {
                flag = 0;
                break;
            }
            gift *= 2; 
        }

        if (flag == 1 && budget <= x) 
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