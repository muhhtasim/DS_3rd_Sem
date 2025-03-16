//Muhtasim_62

#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node* next;
};

struct Node* reverseList(struct Node* head)
{
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

void append(struct Node** head, int new_data)
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

int main()
 {
    struct Node* head = NULL;
    int value;

    printf("Enter first element: ");
    scanf("%d", &value);
    append(&head, value);

    printf("Enter second element: ");
    scanf("%d", &value);
    append(&head, value);

    printf("Enter third element: ");
    scanf("%d", &value);
    append(&head, value);

    printf("Original Linked List: \n");
    printList(head);


    head = reverseList(head);

    printf("Reversed Linked List: \n");
    printList(head);

    return 0;
}

