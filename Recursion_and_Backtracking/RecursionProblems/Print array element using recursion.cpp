#include<bits/stdc++.h>
using namespace std;
void PrintArr(int arr[],int n)
{
	if(n==-1)
	{
		return ;
	}
	else                                             
	{
		
		PrintArr(arr,n-1);
		cout<<arr[n]<<"  ";
		
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	PrintArr(arr,n-1);
}
