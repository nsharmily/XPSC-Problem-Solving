#include <iostream>
using namespace std;

int main() 
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    if (a * b * c > x * x * x) 
    {
        cout << "Cuboid" << endl;
    } 
    else if (a * b * c < x * x * x) 
    {
        cout << "Cube" << endl;
    } 
    else 
    {
        cout << "Equal" << endl;
    }
    return 0;
}