#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node* next;
};


void insertEnd(struct Node** head, int newData)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;

    newNode->data = newData;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void deleteBeginning(struct Node** head)
{
    if (*head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteEnd(struct Node** head)
{
    if (*head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* prev = NULL;

    if (temp->next == NULL)
    {
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);
}

void deleteAtPosition(struct Node** head, int position)
{
    if (*head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = *head;

    if (position == 0)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    struct Node* prev = NULL;
    for (int i = 0; temp != NULL && i < position; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Position out of range!\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
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

int main() {
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    printf("Linked List: ");
    printList(head);


    deleteBeginning(&head);
    printf("After deleting from beginning: ");
    printList(head);

    deleteEnd(&head);
    printf("After deleting from end: ");
    printList(head);

    deleteAtPosition(&head, 1);
    printf("After deleting at position 1: ");
    printList(head);

    return 0;
}

