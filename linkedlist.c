#include <stdio.h>
#include <stdlib.h>

// code for linked list using struct and dynamic memory allocation 
typedef struct node 
{
    int number;
    struct node *next; // Self Referential Structures
}
node;

int main(void)
{
    node *list; // creating list pointer variable which will points to linked list
    list = NULL;

    node *n; // n is temporary pointer variable of type node

    n = malloc(sizeof(node)); // allocating memory of size node to n pointer
    if (n == NULL)
    {
        return 1;
    }
    
    n->number = 1; // storing data 1 to number field in node 
    n->next = NULL; // storing NULL to address field in node

    list = n; // storing address of node in list variable

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

    n = malloc(sizeof(node));
    if (n == NULL)
    {   
        free(list->next->next);
        free(list->next);
        free(list);
        return 1;
    }

    n->number = 4;
    n->next = NULL;

    list->next->next->next = n;

    printf("size of node : %d bytes\n",sizeof(node));
    for (node *temp = list; temp != NULL; temp = temp->next)
    {
        printf("%d\n",temp->number);
    }

}