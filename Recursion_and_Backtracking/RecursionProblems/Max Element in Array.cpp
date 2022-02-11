#include<bits/stdc++.h>
using namespace std;
int Max(int arr[],int n)
{
	if(n==arr.size()-1)
	{
		return arr[n];
	}
   int misa=Max(arr,n+1);
   if(misa>arr[n])
   {
   	return misa;
   }
	
	else
	{
		return arr[n]; 
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
	int max=Max(int arr[],0);
	cout<<max;
}
