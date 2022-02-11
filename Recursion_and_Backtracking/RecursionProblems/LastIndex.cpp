#include<bits/stdc++.h>
using namespace std;
int firstIndex(int arr[],int idx, int x,int size)
{
	if(idx==size)
	{
		return -1;
	}
	int fissa=firstIndex(arr,idx+1,x,size);
	if(fissa==-1)
	{
	    if(arr[idx]==x)
	   {
		  return idx;
       }
		else
		{
		   return -1;	
		}	
	}
	else
	{
		return fissa;
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
	int d;
	cin>>d;
	int fid=firstIndex(arr,0,d,n);
	cout<<fid;
}
