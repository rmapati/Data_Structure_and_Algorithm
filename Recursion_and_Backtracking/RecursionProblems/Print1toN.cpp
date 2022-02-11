#include<iostream>
using namespace std;
int printInc(int n)
{
    if(n==0)
    {
        return 1 ;
    }
    else{
        printInc(n-1);
       cout<<n<<endl;

    }
}
int main()
{
    int n;
    cin>>n;
    printInc(n);

}
