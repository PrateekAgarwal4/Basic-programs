#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	string n;
	cin>>n;
	int se=0,so=0;
	for(int i=0;i<n.length();i=i+2)
	{
		so=n[i]+so;
	}
	for(int i=1;i<n.length();i=i+2)
	{
		se=n[i]+se;
	}
	cout<<abs(se-so);
	
}
