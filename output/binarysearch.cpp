#include<iostream>
using namespace std;

int binary()
{
    int arr[5]={1,3,4,5,6};
    int start=0;
    int end=4;
    int mid=(start+end)/2;
    int num;
    cin>>num;
    while (start<=end)
    
    {
       if (num==arr[mid])
    {
        return mid;
    }

    if (num>arr[mid])
    {
        start=mid+1; 
    }
    else
    {
        end=mid-1;
    }
    mid = (start + end)/2;
    }
    return -1;
}

   int main()
   {
     int ind =binary();
    cout<<ind; 
}