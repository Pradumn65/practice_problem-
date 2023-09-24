#include<iostream>
using namespace std;

void all_divisor(int n)
{
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<"  ";
        }
    }
}
  
int main()
{
    int n;
    cout<<"enter the no:  ";
    cin>>n;
    all_divisor(n);
    return 0;
}