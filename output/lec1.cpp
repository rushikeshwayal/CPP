#include<iostream>
using namespace std;
int main() 
{
int arr[6]={55,7,4,21,66,77};
for (int i = 0; i < 5; i++)
{
   for (int j = i+1; j < 6; j++)
   {
    if (arr[i]>arr[j])
    {
        int temp =arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
   }
}
for (int i = 0; i < 6; i++)
   {
    cout<<arr[i]<<"  ";
   }
}