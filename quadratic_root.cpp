//  program to fint the root of quadratic equation 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void root(int a,int b,int c)
{
    int d=(b*b)-(4*a*c);
    if(d>0)
    {
        double root1=(-b+sqrt(d))/(2*a);
        double root2=(-b-sqrt(d))/(2*a);
        cout<<"the root are real and different"<<endl;
        cout<<"root1 = "<<root1<<endl;;
        cout<<"root2 = "<<root2;

    }
    else if(d==0)
    {
        double root1=-b/(2*a);
        double root2=root1;
         cout<<"the root are real and same"<<endl;
        cout<<"root1 = "<<root1<<endl;;
        cout<<"root2 = "<<root2;
    }
    else{
        double realpart=-b/(2*a);
        double imaginary=sqrt(-d)/(2*a);
        cout<<"the root are imaginary and different "<<endl;
        cout<<"root1 = "<<realpart<<"+i"<<imaginary<<endl;
        cout<<"root1 = "<<realpart<<"-i"<<imaginary;
       
    }
}
  
int main()
{
    int a,b,c;
    cout<<"enter the number a b c: ";
    cin>>a>>b>>c;
    root(a,b,c);
    return 0;
}