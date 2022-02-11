#include<iostream>
using namespace std;
int logarithmicpower(int x,int n)
{
	if(n%2==0)
	{
		if(n==0)
		{
			return 1;
		}
		else
		{
			return logarithmicpower(x,n/2)*logarithmicpower(x,n/2);
		}
	}
	else
	{
		if(n==0)
		{
			return 1;
		}
		else
		{
			return x*logarithmicpower(x,n/2)*logarithmicpower(x,n/2);
		}
	}
}
int main()
{
	int n,x;
	cin>>x>>n;
	int res=logarithmicpower(x,n);
	cout<<res<<endl;
}
