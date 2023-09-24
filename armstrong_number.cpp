// Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

#include<iostream>
using namespace std;
void is_Armstrong_no(int n)
{
    int temp=n;
    int sum=0;
    int r;
    while(n!=0)
    {
       r=n%10;
       sum+=(r*r*r);
       n=n/10;
    }
    if(sum==temp)
    {
        cout<<"number is Armstrong";
    }
    else{
        cout<<"number is not Armstrong ";
    }
}
  
int main()
{
    int n;
    cout<<"enter the number  ";
    cin>>n;
    is_Armstrong_no(n);
    return 0;
}