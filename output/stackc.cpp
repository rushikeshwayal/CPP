#include<iostream>
using namespace std;

class Stack{
//properties
public:
int *arr;
int top;
int size;


//behaviour
Stack(int size){

    this-> size=size;
    arr = new int [size];
    top=-1;
}

void push(int element)
{
if (size-top>1)
{
    top++;
    arr[top]=element;
}
else{
    cout<<"stack is over flow"<<endl;
}

}
void pop(){
    if (top>=0)
    {
       top--;
    }
    else{
        cout<<"stack is underflow"<<endl;
    }
}
void peek(){
    if (top>=0)
    {
       cout<< arr[top]<<endl;
    }
    else{
        cout<<"stack is empty"<<endl;
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
};


int main()
{
    Stack st(4);
    st.peek();
    st.empty();
    st.push(33);
    st.push(45);
    st.push(58);
    st.push(77);
    st.push(467);
    st.push(345);

    st.peek();  
    st.pop();
    st.peek();
    st.empty();

    Stack st2(st);
    st2.peek();
    
} 
