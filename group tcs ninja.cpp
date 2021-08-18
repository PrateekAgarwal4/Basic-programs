#include <iostream>

using namespace std;

int main()
{
    int p;
    int a=0,b=0,c=0,d=0;
    cin>>p;
    if(100<=p && p<=200)
    {
        if(p%4==0)
        {
            a=b=c=d=p/4;
        }
        else
        {
            int r=p%4;
            a=p/4;
            b=p/4;
            c=p/4;
            d=p/4+r;
        }
        
    }
    else
    {
        cout<<"Invalid ";
        return 0;
    }
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
}
