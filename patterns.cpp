#include<iostream>
using namespace std;
int main()
{
//#pattern 0
//     int i=1;
//     int count=1;
// int n;
// cin>>n;
//    while (i<=n)
//    {
//     int j=1;
//     while (j<=n)
//     {
//         cout<<count<<" ";
//         count=count+1;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//    }       
//#pattern 1
// int count=1;
// int n;
// cin>>n;
// while (count<=n)
// {
// for (int i = 1; i <=count; i++)
// {
//    cout<<count<<" ";
// }
// cout<<endl;
// count++;
// }

int count =0;
int n;
int x=1;
cin>>n;
while (count<n)
{
 for (int i =1; i <count; i++)
 {
   if (x<=n)
   {
    cout<<x<<" ";
    x++;
   }
   
       
    
 }
 cout<<endl;
 count=count+1;
}
}