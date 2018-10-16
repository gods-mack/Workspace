// Circular Queue with Array using C++

#include<iostream>
#include<cstdio>

#define SIZE 5
using namespace std;

int front = -1, rear =-1;
int arr[SIZE];
int isFull()
{
    if( (front == rear + 1) || (front == 0 && rear == SIZE-1))
    { return 1; }
    else {
    return 0; }
}

int isEmpty()
{
    if(front == -1)
    { return 1; }
    else {
    return 0; }
}

void insertE(int element)
{
    if(isFull())
    { cout<<"\n Overflow : Queue is full "; }
    else
    {
        if(front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = element;
        cout<<"\n Inserted  "<<element;
    }
}


int deQueue()
{
    int element;
    if(isEmpty()) {
        cout<<"\n Underflow : Queue is empty \n";
        return(-1);
    } else {
        element = arr[front];
        if (front == rear){
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % SIZE;

        }
        printf("\n Deleted element = %d \n", element);
        return element ;
    }
}




void display()
{
 int i;
    if(isEmpty())
        {  cout<<" \n Empty Queue\n"; }
    else
    {
        printf("\n Front = %d ",front);
        printf("\n Items = ");
        for(  i = front; i!=rear; i=(i+1)%SIZE) {
            printf("%d ",arr[i]);
        }
        printf("%d ",arr[i]);
        printf("\n Rear = %d \n",rear);
    }
}

int main()
{
    deQueue();

    insertE(13);
    insertE(12);
    insertE(43);
    insertE(47);
    insertE(55);

    insertE(6);

    display();
    deQueue();

    display();

    insertE(7);
    display();

    insertE(8);
}

