#include<iostream>
using namespace std;
int logarithmicpower(int x,int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
	 	return x*logarithmicpower(x,n-1);
	}
}
int main()
{
	int n,x;
	cin>>x>>n;
	int res=logarithmicpower(x,n);
	cout<<res<<endl;
}
