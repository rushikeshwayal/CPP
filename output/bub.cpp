#include<iostream>
using namespace std;
int main()
{
int arr[6]={55,7,4,21,66,77};
int c=1;

while (c<6)
{
   for (int i = 0; i <6-c; i++)
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
for (int i = 0; i < 6; i++)
{
    cout<<arr[i]<<"  ";
}
}