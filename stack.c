/* Stack
*/


#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

// For pushsing
void push(int value)
{
    if (top == MAX - 1)
    {
      printf("Stack Overflow! Nai baa jayga %d\n", value);
      return;
    }
      stack[++top] = value;
        printf("%d push oise\n", value);
}

// For popping
int pop()
{
    if (top == -1)
    {
       printf("Stack Underflow! pocket khali\n");
       return -1;
    }
       printf("%d popped from stack\n", stack[top]);
       return stack[top--];
}

// For display
void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
          printf("Stack elements: ");
           for (int i = top; i >= 0; i--)
           {
             printf("%d ", stack[i]);
           }
              printf("\n");
}

//For top_element show
int topElement()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

//For last_element
int lastElement()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[0];
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    printf("Top element is: %d\n", topElement());
    printf("Last element is: %d\n", lastElement());
    return 0;

    /*
    int n,m;
    printf("Jaa push korte chan den");
    scanf("%d",&n);
    push(n);
    */


}

