#include "./stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        int left=INT_MAX;
        int flag=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>=k)
            {
                flag=1;
                if(a[i]%k<left)
                {
                    left=a[i]%k;
                }
            }
        }
        if(flag==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<left<<endl;
        }
    }
    return 0;
}