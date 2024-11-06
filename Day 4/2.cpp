#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int cards[n];  
        int even=0;
        int odd=0;
        for (int i=1; i<=n; i++)
        {
            if (i%2==0) 
            {
                even++;
            } 
            else 
            {
                odd++;
            }
        }

        if (x%2==0) 
        {  
            even--; 
        } 
        else 
        {  
            odd--; 
        }

        if (x%2==0) 
        {
            cout<<even<<endl; 
        } 
        else 
        {
            cout<<odd<<endl;  
        }
    }
    return 0;
}