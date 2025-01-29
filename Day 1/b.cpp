#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;  
    string final = "ADVITIYA";  
    while (t--) 
    {
        string s;
        cin >> s;
        int total = 0;
        for (int i = 0; i < 8; i++) 
        {
            int step = (final[i] - s[i] + 26) % 26;
            total += step;
        }
        cout << total << endl;
    }
    return 0;
}