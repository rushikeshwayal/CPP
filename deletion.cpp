#include<iostream>
using namespace std;
int main(){
     int arr[100] = {1,2,3,4,5};
     int pos=2;
     for (int i = pos; i < 5; i++)
     {
        arr[i]=arr[i+1];
     }
     for (int i = 0; i < 4; i++)
     {
        cout<<arr[i]<<" ";
     }
     
}
