#include<iostream>
using namespace std;

class Queue1{
    public:
    //properties
    int size;
    int *arr;
    int front ;
    int rear;

    //behaviour
    Queue1(int size)
    {
        arr = new int [size];
        front=0;
        rear=0;

    }

void  push(int element){
    if (rear<=size)
    {
   arr[rear]=element;
       rear++;
    }
    else
    {
       cout<<"queue is overflow"<<endl;
    }
} 

void empty(){
    if (rear==front)
    {
       cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }   
}

void pop(){
    if (rear==front)
    {
       cout<<" can't pop , queue is empty"<<endl;
    }
    else
    {
        front++;
        if (front==rear)
        {
            front=0;
            rear=0;
        }
    }
}

void frontt()
{
    if (front<rear)
    {
       cout<<arr[front]<<endl;
    }
    else{
         cout<<" can't print front , queue is empty"<<endl;
    }
}


};
int main()
{


Queue1 q(5);
q.empty();
q.push(21);
q.push(63);
q.pop();
q.frontt();
q.empty();


}