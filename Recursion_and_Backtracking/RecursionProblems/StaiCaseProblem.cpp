#include<iostream>
using namespace std;
stairCase(int n)
{
	if(n==1)
	{
		return 1;
	}
	else if(n==2)
	{
		return 2;
		
	}
	else if(n==3)
	{
		return 3;
	}
	
	return stairCase(n-1)+stairCase(n-2)+stairCase(n-3);
}
int main()
{
	int n;
	cin>>n;
  int ways=stairCase(n);
  cout<<ways;
	
}
