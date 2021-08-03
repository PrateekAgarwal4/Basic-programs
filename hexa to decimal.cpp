#include<bits/stdc++.h>

using namespace std;

int main()
{
	string n;
	cin>>n;
	int s=n.size();
	int ans=0,x=1;
	for(int i=s-1;i>=0;i--)
	{
		if(n[i]>='0' && n[i]<='9') /// NORMAL
		{
			ans+=x*(n[i]-'0');
		}
		if(n[i]>='A' && n[i]<='F') //10=A ,11=B,12=C, 13=D,14=E,15=F
		{
			ans+=x*(n[i]-'A'+10);
		}
		x=x*16;
	}
	cout<<ans;
}
