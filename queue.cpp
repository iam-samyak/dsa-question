#include <stdio.h>
#include <conio.h>
#include <iostream>
#define MAXSIZE 10
using namespace std;
int queue[MAXSIZE];
int rear = -1, front = 0, i, choice;
void insert()
{
    int n;
    if (rear == MAXSIZE - 1)
    {
        printf("Queue is Full\n");
    }
    else
    {
        printf("Enter the element to be inserted \n");
        scanf("%d", &n);
        rear++;
        queue[rear] = n;
    }
}
void Delete()
{
    int n;
    if (front > rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        front++;
        n = queue[front];
        printf("Element to be poped is %d", &n);
    }
}
void display()
{
    if (front > rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Elements in Queue are : \n ");
        for (i = front; i <= rear; i++)
        {
            printf("Element at %d is %d", i, queue[i]);
            printf("\n");
        }
    }
}
int main()
{
    do
    {
        printf("-------CHOICES--------\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.exit\n");
        printf("Enter Your Choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid Choice Entered\n");
        }
    } while (choice != 4);
    return 0;
}