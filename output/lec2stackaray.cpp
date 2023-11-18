#include<iostream>
using namespace std;

class Stack1{
public:

//properties
int top;
int size;
int *arr;



//behaviour
Stack1(int size)
{
this ->size=size;
top=-1;
arr= new int[size];
}

void push(int element)
{
    if (size-top>1)
    {
      top++;
      arr[top]=element;
    }
    else
    {
        cout<<"stack is overflow"<<endl;
    }

}
    void empty(){
        if (top==-1)
        {
            cout<<"stack is empty"<<endl;

        }
        else
        {
            cout<<"stack is not empty"<<endl;

        }
        
    }
void pop()
{
    if (top>=0)
    {

        top--;
    }
    else{
        cout<<"can't pop stack is undrflow"<<endl;
        
    }
}


void peek()
{
if (top>=0)
{
    cout<<"top element is : "<<arr[top]<<endl;
}
else
{
    cout<<"can't acees top , stack is empty"<<endl;
}


}









};



int main(){

Stack1 s(5);
s.empty();
s.push(10);
s.push(144);
s.empty();
s.pop();
s.peek();




}