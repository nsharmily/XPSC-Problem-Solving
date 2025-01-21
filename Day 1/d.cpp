#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t; 
    while (t--) 
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        int case1 = a4 - a2, case2 = a5 - a4, case3 = a1 + a2; 
        int array[] = {case1, case2, case3};
        int maximum = 0;
        for (int i = 0; i < 3; i++) 
        {
            int a3 = array[i];
            int fibonacciness = 0;
            if (a1 + a2 == a3) ++fibonacciness; 
            if (a2 + a3 == a4) ++fibonacciness; 
            if (a3 + a4 == a5) ++fibonacciness;
            maximum = max(maximum, fibonacciness);
        }
        cout << maximum << endl;
    }
    return 0;
}