#include<iostream>

using namespace std;

int gcd(int a,int b)
{
	while((b)!=0)
	{
		int c=a%b;//  as suppose a=42 b=24  42%24=18; 24%18=6; 18%6=0 6 is the answer 
		
		a=b;
		b=c;
	}
	return a;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
}
