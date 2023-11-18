#include<iostream>
#include<stack>
using namespace std;






int main(){
    
    //creation of stack
    stack<int> s;
    //push operation
    s.push(2);
    s.push(3);
    //pop operation
    s.pop();
    //which is top element
    cout<<"top element : "<<s.top()<<endl;

    //checking weatjer the stack is empty or not
    if (s.empty())

    {
       cout<<"stack is empty"<<endl;

    }else
    {
        cout<<"stack is not empty"<<endl;
    }

    //size of stack
    cout<<"size of stack is : "<<s.size()<<endl;
    




    
}