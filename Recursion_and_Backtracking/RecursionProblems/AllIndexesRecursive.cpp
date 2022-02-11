#include<bits/stdc++.h>
using namespace std;

int AllIndexesRecursive(int input[],int size,int x,int output[])
{
	//if size is equal to zero
	  if(size==0)
	  {
	  	return 0;
	  }
	  
	  // Getting the recursive answer
	  int smallAns=AllIndexesRecursive(input,size-1,x,output);
	  
	  
	// If the last element of input array is equal to x
      if(input[size-1]==x)
	  {    
	  
	     // Insert the index of last element of the input array into the output array
      // And increment ans
	  	output[smallAns++]=size-1;
	  }
	  
	  
	  
	  return smallAns;
}



/* void AllIndexes(int input[],int n,int x)
 {
 
   int output[n]; 
    
    
    int size=AllIndexesRecursive(input, n,x, output);
    
    for (int i = 0; i < size; i++)
	{
        cout << output[i] << " ";
    }
 }*/



int main()
{
	int n;
	cin>>n;
    int arr[n];
    int output[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	int x;
	cin>>x; 
    int size=AllIndexesRecursive(arr, n, x,output);
    for (int i = 0; i < size; i++)
	{
        cout << output[i] << " ";
    }
     
    return 0;
}
