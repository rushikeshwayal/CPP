#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
int c =0;
    while (c<4)
    {
       for (int i = 0; i < 5-c; i++)
       {
        if (arr[i]>arr[i+1])
        {
           int temp = arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
        }
        
       }
       c++;
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
} 
