#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertBeginning(struct Node** head, int newData)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

void deleteBeginning(struct Node** head)
{
    if (*head == NULL)
    {
        printf("List is empty! Cannot delete.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
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

int main()
{
    struct Node* head = NULL;

    insertBeginning(&head, 30);
    insertBeginning(&head, 20);
    insertBeginning(&head, 10);

    printf("Linked List before deletion: ");
    printList(head);

    deleteBeginning(&head);
    printf("After deleting from beginning: ");
    printList(head);

    return 0;
}

