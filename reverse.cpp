#include<iostream>
#include<math.h>

using namespace std;
int main(){

int x;
cin>>x;
 int temp = 0;
while (x!=0)
{
    int num = x%10;
    if((temp> INT_MAX /10) || (temp< INT_MIN/10))
    {
      return 0;
    }
    x=x/10;
    temp = num+temp*10;
}

// if(temp>=-(pow(2,31)) && temp<=(pow(2,31))-1)
// {
//     cout<<temp;

// }
//  else
// {
//       cout<<0;
// }

}