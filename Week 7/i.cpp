#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    cin >> x;
    int a[] = {1, 2, 4};
    int count = 0;
    for (int i = 0; i < 3; i++) 
    {
        if (x >= a[i]) 
        {
            x -= a[i]; 
            count++;
        }
    }
    cout << count << endl;
    return 0;
}