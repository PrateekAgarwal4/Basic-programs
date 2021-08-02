#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,sum=0;
	cin>>n;
	int t=n;
	for(int i=1;i<(n);i++)
	{
		if(n%i==0)
		{
		  sum=sum+i;
		  cout<<i<<" ";
	}
	}
	if(sum==t)
	{
		cout<<"Ywes";
	}
	else
	cout<<"Nako";
	
	
}
