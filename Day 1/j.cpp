#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) 
    {
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        int count = 0, flag = 1;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] <= d && flag == 0) 
            {
                count++;
                flag = 1;
            } 
            else if (a[i] > d && flag == 1) 
            {
                count++;
                flag = 0;
            }
        }
        cout << count << "\n";
    }
    return 0;
}