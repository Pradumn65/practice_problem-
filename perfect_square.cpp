// check whether the given no is  valid perfect square or not

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void is_perfect_square(int n)
{   
    bool result=false;
    int num=sqrt(n);
    if(num*num==n)
    {
        cout<<"it is perfect square of  "<<num<<"x"<<num;
    }
    else{
        cout<<"it is not perfect square";
    }   
}
  
int main()
{
    int n;
    cout<<"enter the no:  ";
    cin>>n;
    is_perfect_square(n);
    return 0;
}
