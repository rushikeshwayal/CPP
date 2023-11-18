#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cctype>
using namespace std;

struct node 
{
    int data;
    struct node* next;
};

struct node* top = NULL;

struct node* createNode(int data)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    return ptr;
}

void push(int data)
{
    struct node* ptr = createNode(data);
    if (top == NULL) {
        top = ptr;
    }
    else {
        ptr->next = top;
        top = ptr;
    }
}

int pop()
{
    int data;
    struct node* temp;
    if (top == NULL) {
        return -1;
    }
    data = top->data;
    temp = top;
    top = top->next;
    free(temp);
    return data;
}

int main()
{
    char str[100];
    int data = -1, operand1, operand2, result;

    cout << "Enter your postfix expression: ";
    cin.getline(str, 100);

    for (int i = 0; i < strlen(str); i++)
    {
        if (isdigit(str[i]))
        {
            data = (data == -1) ? 0 : data;
            data = (data * 10) + (str[i] - '0');
            continue;
        }
        if (data != -1)
        {
            push(data);
        }
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            operand2 = pop();
            operand1 = pop();
            if (operand1 == -1 || operand2 == -1) {
                cout << "Invalid expression" << endl;
                return 1;
            }
            switch (str[i])
            {
                case '+':
                    result = operand1 + operand2;
                    push(result);
                    break;
                case '-':
                    result = operand1 - operand2;
                    push(result);
                    break;
                case '*':
                    result = operand1 * operand2;
                    push(result);
                    break;
                case '/':
                    result = operand1 / operand2;
                    push(result);
                    break;
            }
        }
        data = -1;
    }
    if (top != NULL && top->next == NULL) {
        cout << "Output: " << top->data << endl;
    }
    else {
        cout << "Invalid expression" << endl;
    }
    return 0;
}
