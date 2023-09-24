// add the numbers digit until the sum become in single digit
// e.g 88=>8+8=>16=>1+6=>7

#include<iostream>
using namespace std;

int add_digit(int num)
{
    int sum=0;
    while(num>0 || sum>=10)
    {
        if(num==0)
        {
            num=sum;
            sum=0;
        }
        sum+=num%10;
        num=num/10;
    }

    return sum;
}
  
int main()
{
    int num;
    cout<<"Enter the number  ";
    cin>>num;
    int result=add_digit(num);
    cout<<"sum is:   "<<result;
    return 0;
}