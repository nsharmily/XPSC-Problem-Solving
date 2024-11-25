#include "./stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,x,y;
        cin>>n>>x>>y;
        vector<long long int> a(n);
        long long int sum=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]*x<y)
            {
                sum+=a[i]*x;
            }
            else
            {
                sum+=y;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}