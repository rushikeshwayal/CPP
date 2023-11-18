#include<iostream>
using namespace std;
int binary(int arr[], int size, int key);
int main()
{
int arr[6]={1,44,55,78,99,110};
int index = binary(arr, 6, 78);
cout<<"index of 78 is : "<<index;
return 0;
} 

int binary(int arr[],int size, int key)
{
   int start=0;
    int end=size-1;
    while (start<=end)
    {
         
    int mid = (start+end)/2;

         if (key>arr[mid])
       {
        start = mid + 1;
       }
       else if (arr[mid]==key)
       {
        return mid;
       }
       else 
       {
        end = mid - 1;
       }
      
    }
    return -1;
}


