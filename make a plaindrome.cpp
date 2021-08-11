#include<iostream>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int l=s.length()-1;
	int i=0,ans=0,j=l-1;
	while(i<l)
	{
		if(s[i]!=s[j])
		{
			i++;
			j--;
		}
	}
	cout<<i;
}
