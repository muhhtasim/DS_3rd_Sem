// Muhtasim_62

#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node* next;
};
void muhtasim(struct Node** head, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertAtPosition(struct Node** head, int data, int position)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (position == 1)
    {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Position out of bounds!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}


void display(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

//maam question easy koiren :)

int main() {
    struct Node* head = NULL;
    muhtasim(&head, 3);
    muhtasim(&head, 2);
    muhtasim(&head, 1);


    int value, position;

    printf("Enter value to insert: ");
    scanf("%d", &value);
    printf("Enter position to insert at: ");
    scanf("%d", &position);
    insertAtPosition(&head, value, position);

    printf("Linked List after insertion: ");
    display(head);

    return 0;
}

