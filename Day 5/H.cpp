#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<int> number(n);
    long long int maxsum=0;
    for (int i=0; i<n; i++) 
    {
        cin>>number[i];
        maxsum+=number[i];
    }
    if (maxsum%2==0) 
    {
        cout<<maxsum<<endl;
        return 0;
    }
    int smallest_odd = INT_MAX;
    for (int num : number) 
    {
        if (num%2!=0)
        {
            smallest_odd=min(smallest_odd, num);
        }
    }
    cout<<maxsum-smallest_odd<<endl;
    return 0;
}
