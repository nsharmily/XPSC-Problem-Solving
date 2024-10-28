#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    cin>>s; 
    set<char>letter;  
    for (char c : s) 
    {
        letter.insert(c);
    }
    for (char x='a'; x<='z'; x++) 
    {
        if (letter.find(x)==letter.end()) 
        {  
            cout<<x<<endl;  
            return 0; 
        }
    }
    cout<<"None"<<endl;
    return 0;
}