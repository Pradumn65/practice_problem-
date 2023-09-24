// check whether array is sort or not;

#include<iostream>
using namespace std;
bool is_array_sort(int arr[],int size)
{  
    bool sort=true;
    int i=0;
    
    while(i<size-1)
    { 
      if(arr[i+1]<arr[i])
      {
        sort= false;
        break;
      }
      i++;
    }

    return sort;
}  
 
  
int main()
{
    int  arr[100];
    int n;
    cout<<"enter the sizeof array  ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(is_array_sort(arr,n))
    {
        cout<<"array is sort";
    }
    else{
        cout<<"array is not sort";
    }
    return 0;
}