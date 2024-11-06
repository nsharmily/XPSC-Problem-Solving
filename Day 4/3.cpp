#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;  

    while (t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        vector<int> b(n);
        for (int i=0; i<n; i++)
        {
            cin>>b[i];
        }

        int already_wined=0;
        vector<int> votes;
        int have_to_win=(n/2)+1;

        for (int i=0; i<n; i++) 
        {
            if (a[i]>b[i]) 
            {
                already_wined++;
            } 
            else 
            {
                votes.push_back(b[i]-a[i]+1); 
            }
        }

        if (already_wined>=have_to_win) 
        {
            cout<<"YES"<<endl;
            continue;
        }

        sort(votes.begin(), votes.end());
        for (int vote : votes) 
        {
            if (x>=vote) 
            {
                x-=vote;
                already_wined++;
                if (already_wined>=have_to_win) 
                {
                    break;
                }
            } 
            else 
            {
                break; 
            }
        }

        if (already_wined>=have_to_win) 
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