
#include <stdio.h>
#define N 5

int queue[N],front = -1,rear = -1;


int isFull()
{
    return rear==N - 1;
}

int isEmpty()
{
    return front==-1 || front > rear;
}


void enqueue(int value)
{
    if (isFull())
    {
        printf("Queue Overflow! No space left for %d\n", value);
        return;
    }
    if (front == -1)
        front = 0;
    queue[++rear] = value;
    printf("%d enqueued into queue\n", value);
}


int dequeue()
{
    if (isEmpty())
    {
        printf("Queue Underflow! No elements to dequeue\n");
        return -1;
    }
    int value = queue[front++];
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
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
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

    printf("Peek element after dequeue: %d\n", peek());

    return 0;



   /*
    int n,m;
    printf("Jaa enqueue korte chan den");
    scanf("%d",&n);
    enqueue(n);
    display();
   */

}

