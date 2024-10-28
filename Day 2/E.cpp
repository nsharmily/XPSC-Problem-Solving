#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int A,B,T;
    cin>>A>>B>>T;
    double timelimit=T+0.5;
    int biscuits=0;
    int time=A;
    while (time<=timelimit) 
    {
        biscuits+=B;
        time+=A; 
    }
    cout<<biscuits<< endl; 
    return 0;
}