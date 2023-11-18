#include<iostream>

using namespace std;
int main()
{
    int num=10;
    int *ptr = &num;
    //int *ptr2 = num;
    cout<<num<<endl;
    cout<<"__"<<&num<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    cout<<"__"<<&*ptr<<endl;

cout<<endl;
cout<<"aray"<<endl;
cout<<endl;

    int arr[4]={1,3,4,5};
    cout<<arr[0]<<endl;
     cout<<arr<<endl;
     cout<<arr+1<<endl;
      cout<<*arr<<endl;
      cout<<*arr+1<<endl;
      cout<<*(arr+1)<<endl;
}
