// program to change bianry number to decimal

#include<iostream>
#include<math.h>
using namespace std;
int decimal_to_binary(int n)
{   
    int sum=0;
    int digit;
    int i=0;
    while(n!=0)
    {
       digit=n%10;
       sum+=(pow(2,i++)*digit);
       n=n/10;
       
    }
     return sum;
}
  
int main()
{
    int n;
    cout<<"enter the binary number  ";
    cin>>n;


    int result=decimal_to_binary(n);
    cout<<result;

    return 0;
}