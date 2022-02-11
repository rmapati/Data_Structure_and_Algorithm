#include<iostream>
using namespace std;
void TOH(int n,char A,char B,char C)
{
	if(n==0)
	{
		return ;
	}
	else{
		
		TOH(n-1,A,C,B);
		//b and c swapping
	    cout<<A<<"-->"<<B<<endl;
	     TOH(n-1,C,B,A);
	     //a and c swapping
		
	}
	//printing inorder
    	
}
int main()
{
	int n;
	cin>>n;
	char A,B,C;
	cin>>A>>B>>C;
	
	TOH(n,A,B,C);
}
