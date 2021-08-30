/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    while(n>0)
    {
        int r=n%5;                      // 754=5*150+4    
        sum=sum*10+r;                   //150=5*30+0       30=5*6+0        6=5*1+1          1=5*0+1        11004
        n=n/5;
    }
    int final=0;
    while(sum>0)
    {
        int r=sum%10;
        final=final*10+r;
        sum=sum/10;
    }
cout<<final;
    return 0;
}
