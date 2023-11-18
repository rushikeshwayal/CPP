#include<iostream>
using namespace std;
int main()
{
int arr[9] = {1,2,3,4,5,6,7,8,9};

int num;
cout<<"enter num";
cin>>num;
int a=0;
int b=8;
int mid = a+b/2;

while(a<=b)
{
    
   if(arr[mid]==num)
   {int pos=mid;
    cout<<"  num is present at position "<<pos<<endl;
break;
   }
 else if (arr[mid]>num)
{
 b= mid -1;
}
else
{
    a=mid+1;
}
}
}
    