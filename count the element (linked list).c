//Muhtasim_62

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void labib(struct Node** head, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
}

void printList(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int counting(struct Node* head)
{
    int count = 0;
    struct Node* temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    struct Node* head = NULL;
    int value;

    printf("Enter first element: ");
    scanf("%d", &value);
    labib(&head, value);

    printf("Enter second element: ");
    scanf("%d", &value);
    labib(&head, value);

    printf("Enter third element: ");
    scanf("%d", &value);
    labib(&head, value);

    printf("Original Linked List: \n");
    printList(head);

    printf("Total number of elements: %d\n", counting(head));

    return 0;
}

