#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;  
    while (t--) 
    {
        int n;
        cin >> n; 
        const int day = 100001;
        long long int penalty[day] = {0};  
        for (int i = 1; i <= n; i++) 
        {
            int a;
            cin >> a;
            penalty[a] = max(penalty[a], (long long int)i);  
        }
        long long int total = 0;
        for (int i = 1; i < day; i++)  
        {
            total += penalty[i];  
        }
        cout << total << endl; 
    }
    return 0;
}