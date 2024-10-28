#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n; 
    string s; 
    if (n==0) 
    {
        s="0";
    } 
    else 
    {
        while (n>0) 
        {
            s += (n%10)+'0'; 
            n /= 10;
        }
    }
    reverse(s.begin(), s.end());
    while (s.size()<4) 
    {
        s='0'+s;
    }
    cout<<s<< endl; 
    return 0;
}
