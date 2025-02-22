#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

int isFull()
{
    return (rear + 1) % MAX == front;
}

int isEmpty()
{
    return front == -1;
}


void enqueue(int value)
{
    if (isFull())
    {
        printf("Queue Overflow! No space left for %d\n", value);
        return;
    }
    if (isEmpty())
      {
         front = rear = 0;
      }
    else
       {
           rear = (rear + 1) % MAX;
       }

    queue[rear] = value;
    printf("%d enqueued into queue\n", value);
}

int dequeue()
{
    if (isEmpty())
    {
        printf("Queue Underflow! No elements to dequeue\n");
        return -1;
    }
    int value = queue[front];

    if (front == rear)
    {
       front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }
    printf("%d dequeued from queue\n", value);
    return value;
}


int peek()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return -1;
    }
    return queue[front];
}


void display()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (1)
    {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}


int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();

    printf("Peek element: %d\n", peek());

    dequeue();
    display();

    enqueue(60);
    display();

    printf("Peek element after enqueue: %d\n", peek());

    return 0;


    /*
    int n,m;
    printf("Jaa enqueue korte chan den");
    scanf("%d",&n);
    enqueue(n);
    display();
   */

}
