#include<iostream>
using namespace std;
int main()
{
int a[5];
int z;
int c=0;
cout<<"Enter the search element"<<endl;
cin>>z;
cout<<"Enter the array element"<<endl;
 for (int i = 0; i < 5; i++)
{
    cin>>a[i];
}
for (int i = 0; i < 5; i++)
{
 if (a[i]==z)
 {
    c++;
 }
}
if (c>0)
 {
   cout<<"element is present"<<endl;
 }
 else{
    cout<<"element is not present"<<endl;
     }
} 