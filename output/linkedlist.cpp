#include<iostream>
using namespace std;
class linkedlistt{
    public:
    int data;
    linkedlistt next;

    linkedlistt(int data){
        this-> data=data;
        this -> next  = null;
    }


}

void inseart(int size ,linkedlistt &head)
{
 linkedlistt temp = new linkedlistt(size);
 temp->next=head;
 head = temp;   
}


int main(){

}