#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int found=0;
    for(int i=a; i<=b; i++)
    {
        if(i%c==0)
        {
            cout<<i<<endl;
            found=1;
            break;
        }
    }
    if(found==0)
    {
        cout<<-1<<endl;
    }
    return 0;
}