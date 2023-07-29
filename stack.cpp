#include <iostream>
#define MAXSIZE 10
using namespace std;
int stack[MAXSIZE], top = -1;

void push()
{
    int n;
    if (top == MAXSIZE - 1)
    {
        cout << "Stack is Overflow!!" << endl;
    }
    else
    {
        cout << "Enter the element to enter to push ";
        cin >> n;
        top++;
        stack[top] = n;
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        cout << "Stack is Empty!!" << endl;
    }
    else
    {
        cout << "Stack element are: " << endl;
        for (i = top; i >= 0; i--)
            cout << stack[i] << endl;
    }
}

void pop()
{
    int n;
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        n = stack[top];
        top--;
        cout << "Element to be deleted is " << n;
    }
}

int main()
{
    int choice;
    do
    {
        cout << "-----------------Stack--------------------" << endl;
        cout << "1. PUSH" << endl;
        cout << "2. POP" << endl;
        cout << "3. DISPLAY" << endl;
        cout << "4. EXIT" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "Enter the choice." << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid Choice" << endl;
        }
    } while (choice != 4);
}
