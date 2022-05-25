#include <stdio.h>
#include <stdlib.h>

// code for linked list using struct and dynamic memory allocation 
typedef struct node
{
    int number;
    struct node *next;
}
node;

int main (void)
{
    node *list;
    list = NULL;

    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    
    n->number = 1;
    n->next = NULL;

    list = n;

    n = malloc(sizeof(node));
    if (n == NULL)
    {   
        free(list);
        return 1;
    }

    n->number = 2;
    n->next = NULL;

    list->next = n;

    n = malloc(sizeof(node));
    if (n == NULL)
    {   
        free(list->next);
        free(list);
        return 1;
    }
        
    n->number = 3;
    n->next = NULL;

    list->next->next = n;

    printf("size of node : %d bytes\n",sizeof(node));
    for (node *temp = list; temp != NULL; temp = temp->next)
    {
        printf("%d\n",temp->number);
    }

}