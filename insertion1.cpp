#include<iostream>
using namespace std;
int main(){
//  int array[100], position, c, n, value;
//    cout<<"Enter number of elements in array\n"<<endl;
//    cin>>n;
//    cout<<"Enter elements\n"<<endl;
//    for (c = 0; c < n; c++)
//    {
//    cin>>array[c];
//     }
//    cout<<"Enter the location where you wish to insert an element\n"<<endl;
//    cin>>position;
//    cout<<"Enter the value to insert\n"<<endl;
//    cin>>value;
//    for (c = n - 1; c >= position - 1; c--)
//    {
//   array[c+1] = array[c];
//     }
// 	array[position-1] = value;
//     cout<<"Resultant array is\n"<<endl;
//    for (c = 0; c <= n; c++)
//    {
//       cout<<array[c]; 
//          }
int arr[100] = {1 ,2 ,3,4,5};
int pos=4;
int e = 445;
for (int i = 4; i <= pos-1; i--)

{
   arr[i+1]=arr[i];
    
}
arr[pos-1]=e;
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}


}