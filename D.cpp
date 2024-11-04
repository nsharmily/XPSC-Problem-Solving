#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    string x="Timur";
    sort(x.begin(), x.end());
 
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
 
        if (n!=5) 
        {
            cout<<"NO"<< endl;
            continue;
        }
        else
        {
            sort(s.begin(), s.end());
            if (s==x) 
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
