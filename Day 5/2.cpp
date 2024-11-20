#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> a(n+1,0);
        vector<int> b(m);
        for (int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
	    for (int i=0; i<m; i++)
        {
            cin>>b[i];
        }
        int count=0;
        for (int i=0; i<m; i++)
        {
            if(a[b[i]]>0)
            {
                a[b[i]]--;
            }
            else
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}