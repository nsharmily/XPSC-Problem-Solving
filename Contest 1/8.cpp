#include "./stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,l;
        cin>>n>>k>>l;
        vector<int> song;
        for(int i=0; i<n; i++)
        {
            int a,b;
            cin>>a>>b;
            if(l==b)
            {
                song.push_back(a);
            }
        }
        if(song.size()<k) 
        {
            cout<<-1<<endl;
        }
        else
        {
            sort(song.begin(), song.end());
            reverse(song.begin(), song.end());
            int length=0;
            for (int i=0; i<k; i++)
            {
                length+=song[i];
            }
            cout<<length<<endl;
        }
    }
    return 0;
}