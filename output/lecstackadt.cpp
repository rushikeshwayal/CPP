#include<iostream>
#include<queue>
using namespace std;
int main()
{


    stack<int> s;
    s.push(12);
    s.push(14);
    s.push(15);
    cout<<"size of stack is : "<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    cout<<s.top()<<endl;
 s.pop();
    if (s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }    
  cout<<"size of stack is : "<<s.size()<<endl;
  

// queue<int>q;
// q.push(10);
// q.push(23);
// q.push(90);
// cout<<q.front()<<endl;
//   cout<<q.back()<<endl;
//  q.pop();
// cout<<q.front()<<endl;
    
} 
