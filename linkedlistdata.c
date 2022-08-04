#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}
node;

int main (void)
{
    node *head = malloc(sizeof(node));
    head = NULL;

    node *temp = malloc(sizeof(node));
    temp->data = 1;
    temp->link = NULL;

    head = temp;

    temp = malloc(sizeof(node));
    temp->data = 2;
    temp->link = NULL;

    head->link = temp;

    temp = malloc(sizeof(node));
    temp->data = 3;
    temp->link = NULL;

    head->link->link = temp;

    struct node *ptr = NULL;
    ptr = head ;
    while (ptr != NULL)
    {
        printf("Data : %d\t",ptr->data);
        ptr = ptr->link;
    }

    temp = malloc(sizeof(node));
    temp->data = 4;
    temp->link = NULL;

    ptr = malloc(sizeof(node));
    ptr = head;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }

    ptr->link = temp;
    
    ptr = head ;
    printf("\nLinked list after adding new node at end : \n");
    while (ptr != NULL)
    {
        printf("Data : %d\t",ptr->data);
        ptr = ptr->link;
    }
}