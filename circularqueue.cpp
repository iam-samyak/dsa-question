#include <stdio.h>
#include <conio.h>
#include <iostream>
#define MAXSIZE 10
using namespace std;
int cq[MAXSIZE];
int rear = -1, front = -1, i, choice;
void insert()
{
    int n;
    if ((rear + 1) % MAXSIZE == front)
    {
        printf("Queue is Full\n");
    }
    else
    {
        printf("Enter the element to be inserted \n");
        scanf("%d", &n);
        if (rear == -1)
        {
            rear = 0;
            front = 0;
        }
        else
        {
            rear = ((rear + 1) % MAXSIZE);
            cq[rear] = n;
        }
    }
}
void Delete()
{
    int n;
    if (front == rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        n = cq[front];
        if (front == rear)
        {
            rear = -1;
            front = -1;
        }
        else
        {
            front = (front + 1) % MAXSIZE;
        }
        printf("Deleted item is%d", n);
    }
}
void display()
{
    if (front == rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Elements in Queue are : \n ");
        for (i = front; i != rear + 1; i = (i + 1) % MAXSIZE)
        {
            printf("Element at %d is %d", i, cq[i]);
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