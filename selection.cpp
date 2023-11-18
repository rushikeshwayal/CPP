#include<iostream>
using namespace std;
int main(){
    int arr[5]={34,53,22,19,12};

    for (int i = 0; i < 4; i++)
    {
      for (int j = i+1; j < 5; j++)
      {
        if (arr[j]<arr[i])
        {
           int temp = arr[j];
           arr[j]=arr[i];
           arr[i]=temp;
        }
        
      }
      
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}