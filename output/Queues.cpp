#include<iostream>
#include<queue>
using namespace std;
int main(){

    //creation of queue
    queue<int>q;
//push operation
q.push(11);
cout<<"front : "<<q.front()<<endl;
q.push(29);
cout<<"front : "<<q.front()<<endl;
q.push(455);
cout<<"front : "<<q.front()<<endl;
q.push(90);
cout<<"size of queue is : "<<q.size()<<endl;
q.pop();
cout<<"size of queue is : "<<q.size()<<endl;
}