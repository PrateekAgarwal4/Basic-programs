/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int prime(int n)
{
    int flag=0;
    int i;
    for(i=2;i<(n);i++)
    {
        if(n%i==0)
        {flag=1;
        break;}
    }
    if(flag==0)
    return n;
}
int main()
{
    int l,e;
    cin>>l>>e;
    for(int i=l;i<=e;i++)
    {
        if(prime(i)!=0)
        cout<<i<<" ";
    }
}
