#include<iostream>
using namespace std; 
void zigzag(int n)
{
	if(n==0)
	{
		return ;
		
	}
	else
	{
		cout<<n<<" ";
		zigzag(n-1);
		cout<<n<<" ";
		zigzag(n-1);
		cout<<n<<" ";
		
	}
}
int main()
{
	int n;
	cin>>n;
	zigzag(n);
}
