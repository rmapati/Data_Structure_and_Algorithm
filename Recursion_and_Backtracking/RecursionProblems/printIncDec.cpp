#include<iostream>
using namespace std;
int printInc(int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        cout<<n<<endl;
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
