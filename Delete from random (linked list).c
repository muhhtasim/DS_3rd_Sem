#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void labib(struct Node** head, int newData)
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

void deletee(struct Node** head, int position)
 {
    if (*head == NULL)
    {
        printf("List is empty! Cannot delete.\n");
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
        printf("Invalid position! Out of range.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void printList(struct Node* head)
 {
    struct Node* temp = head;
    int pos = 0;
    while (temp != NULL)
    {
        printf("[%d] %d -> ", pos++, temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node* head = NULL;
    int position;

    /*
     int n, value;

    printf("Enter the number of elements to insert: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &value);
        labib(&head, value);
    }
   */

    labib(&head, 10);
    labib(&head, 20);
    labib(&head, 30);
    labib(&head, 40);
    labib(&head, 50);

    printf("Linked List before deletion:\n");
    printList(head);

    printf("Enter position to delete: ");
    scanf("%d", &position);

    deletee(&head, position);

    printf("Linked List after deletion:\n");
    printList(head);

    return 0;
}

