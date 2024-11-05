#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t; 
    while (t--) 
    {
        int n,k;
        string s;
        cin>>n>>k>>s;
        vector<int> freq(26,0);
        for (char c : s) 
        {
            freq[c-'a']++;
        }

        int odd_count=0;
        for (int count : freq) 
        {
            if (count%2!=0) 
            {
                odd_count++;
            }
        }
        int length=n-k;
        int max_odds;
        if (length%2==0) 
        {
            max_odds=0;  
        } 
        else 
        {
            max_odds=1; 
        }

        if (odd_count<=(max_odds+k)) 
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