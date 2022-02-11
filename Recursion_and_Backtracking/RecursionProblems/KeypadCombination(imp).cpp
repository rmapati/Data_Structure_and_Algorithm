#include<bits/stdc++.h>
using namespace std;
string getpossibleCharsforKeypad(char c)
{
	if(c=='2')
	     return "abc";
    if(c=='3')
	     return "def";
    if(c=='4')
	     return "ghi";
	if(c=='5')
	     return "jkl";
	if(c=='6')
	     return "mno";
	if(c=='7')
	     return "pqrs";
	if(c=='8')
	     return "tuv";
	if(c=='9')
	     return "wxyz";
		 
	return "";  
}
int getkeypadComb(string input,string output[])
{
	if(input.length()==0)
	{
		output[0]= "";
		return 1;
	}
	int smallerOutputSize=getkeypadComb(input.substr(1),output);
	
	
	string OptionsforFirstDigit=getpossibleCharsforKeypad(input[0]);
	
	
	string temp[1000]; 
	int k=0;
    for(int i=0;i<smallerOutputSize;i++)
	{
	    for(int j=0;j<OptionsforFirstDigit.length();j++)
		   {
			    temp[k]=OptionsforFirstDigit[j]+output[i];
		    	k++;
	
	      	}
	}
   for(int i=0;i<k;i++)
   {
   	output[i]=temp[i];
   }
   return smallerOutputSize*OptionsforFirstDigit.length();
}



int main()
{
	string output[1000];
	string num;
	cin>>num;
	int k=getkeypadComb(num,output);
	for(int i=0;i<k;i++)
	{
		cout<<output[i]<<endl;
	}
  
}
