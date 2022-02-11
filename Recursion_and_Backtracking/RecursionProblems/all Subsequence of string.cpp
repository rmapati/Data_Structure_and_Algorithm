#include<bits/stdc++.h>
using namespace std;


//bc-->[--,-c,b-,bc]
//abc-->[---,--c,-b-,-bc,a--,a-c,ab-,abc
void getSubsequence(string input,string output)
{
	if(input.empty())
	{
		cout<<output<<endl;
		return;
	}
	
    // output is passed with including
    // the Ist character of
    // Input string
	getSubsequence(input.substr(1),output+input[0]);
	//int count++;
	
	 // output is passed without
    // including the Ist character
    // of Input string
	getSubsequence(input.substr(1),output);
	//count++;
	
	
	
}

int main()
{
	string input;
	string output="";
	cin>>input;
	getSubsequence(input,output);
    return 0;
}

