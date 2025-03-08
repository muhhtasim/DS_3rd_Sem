#include <stdio.h>
#include <stdlib.h>

struct Node {
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

void deleteEnd(struct Node** head)
{
    if (*head == NULL)
    {
        printf("List is empty! Cannot delete.\n");
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

   // /*
    labib(&head, 10);
    labib(&head, 20);
    labib(&head, 30);
   // */

    printf("Linked List before deletion: ");
    printList(head);

    deleteEnd(&head);
    printf("After deleting from end: ");
    printList(head);

    return 0;
}

