#include "./stdc++.h"
using namespace std;

int main() 
{
	int t;
    cin>>t;
    while (t--) 
    {
        int n; 
        cin>>n;
        string s,t;
        cin>>s>>t;
        int s0=0,s1=0,t0=0,t1=0;
        for (int i=0; i<n; i++) 
        {
            if (s[i]=='0') 
            {
                s0++;
            }
            else
            {
                s1++;
            }
        }
        
        for (int i=0; i<n; i++) 
        {
            if (t[i]=='0') 
            {
                t0++;
            }
            else 
            {
                t1++;
            }
        }
        
        if (s0==t1 && s1==t0) 
        {
            cout<<"YES"<<endl;
        } 
        else if (s0==t0 && s1==t1)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}