#include<iostream>
using namespace std;
class Queue{
//properties
public:
int *arr;
int rear;
int front;
int size;



//behaviour
Queue( int size){
    this -> size=size;
    arr = new int [size];
    rear =0;
    front=0;
}

void push(int element)
{
if (rear<=size)
{
   arr[rear]=element;
   rear++;
}
else
{
    cout<<"can't push queue is Overflow"<<endl;
}
}


void pop()
{
if (rear==front)
{
   cout<<"can't pop queue is underflow"<<endl;
}
else{
    front++;
    if (front==rear)
    {
        front=0;
        rear=0;
    }
    
}
}


void empty(){
    if (rear==front)
    {
        cout<<"queue is empty"<<endl;
    }
    else
    { 
        cout<<"queue is not empty"<<endl;
    }
}


void Front(){
    if (rear>front)
    {
    cout<<"Front is : "<<arr[front]<<endl;
    }
    else{
        cout<<"can't print front  queue is empty"<<endl;
    }
}
};

int main(){
    Queue q(5);

    q.push(3);
    
    q.Front();
          
    q.push(7);
        q.Front();
    q.push(9);
    q.push(12);
    q.push(33);
      q.pop();
        q.Front();
    q.push(22);

    q.push(100);
}