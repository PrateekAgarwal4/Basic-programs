#include<bits/stdc++.h>

using namespace std;

int prime(int n)
{
	int flag=0;
	for(int i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		return 1;
	}
	else
	return 0;
}

int main()
{
	int n;
	cin>>n;
	int check=0,count=0;
	for(int i=2;i<=n/2;i++)
	{
		if (prime(i)==1)
		{
			if (prime(n-i)==1)
			{
				cout<<n<<" : "<<i<<"+"<<n-i<<endl;
				count=count+1;
				check=1;
			}
		}
	}
	cout<<count<<endl;
	if (check==0)
	cout<<"cannot be expressed";
	
}


