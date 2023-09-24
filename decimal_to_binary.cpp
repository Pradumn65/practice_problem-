// program to change decimal  number to binary

#include<iostream>
#include<math.h>
using namespace std;
int decimal_to_binary(int n)
{   
    int ans=0;
    int digit;
    int i=0;
    while(n>0)
    {
        digit=n%2;
        ans=(pow(10,i++)*digit)+ans;
        n=n/2;
       
    }
     return ans;
}
  
int main()
{
    int n;
    cout<<"enter the decimal number  ";
    cin>>n;
    int result=decimal_to_binary(n);
    cout<<result;
    
    return 0;
}