#include<iostream>
using namespace std;
int main()
{
int arr[6]={55,7,4,21,66,77};
for (int i = 1; i < 6; i++)
{
    int curr=arr[i];
    int j=i-1;
    while (arr[j]>curr && j>=0)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=curr;
    }
for (int i = 0; i < 6; i++)
{
    cout<<arr[i]<<" ";
}


}

