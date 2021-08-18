#include <iostream>

using namespace std;

int main()
{
   int in,ex;
   cin>>in>>ex;
   float v[in];
   float t[ex];
   for(int i=0;i<in;i++ )
   {
       cin>>v[i];
   }
   for(int i=0;i<ex;i++)
   {
       cin>>t[i];
   }
   float sum1=0,sum2=0;
   for(int i=0;i<in;i++)
   {
       sum1+=v[i];
   }
   sum1=sum1*18;
   for(int i=0;i<ex;i++)
   {
       sum2+=t[i];
   }
   sum2=sum2*12;
   cout<<"Total cost :"<<sum1+sum2;
}
