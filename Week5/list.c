#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct node
{
    int node;
    struct node *next;
}
node;

node *insert(int k, node *n);
void print_bool(bool b);
bool search(int k, node *n);
void free_list(node *head); 


int main(void)
{
    node *list = NULL;
    list = insert(2, list);
    list = insert(3, list);
    list = insert(5, list);

    // Should print true
    print_bool(search(2, list));
    print_bool(search(3, list));
    print_bool(search(5, list));

    // should print false
    print_bool(search(9, list));
    print_bool(search(12, list));
    print_bool(search(15, list));

}

node *insert(int k, node *n)
{
    // create new node
    node *new_node = malloc(sizeof(node)); 
    new_node->node = k; 
    new_node->next = n; 
    // insert at head of linked list and return head
    return new_node;
}

bool search(int k, node *n)
{
    // two ways to do this: using recursion or iteration
    node *cursor = n; 

    while (cursor)
    {
        if (cursor->node == k)
        {
            return true; 
        }
        cursor = cursor->next; 
    }

    return false;

    // Using recursion 
    // if (!n)
    // {
    //     return false; 
    // }
    // else if (n->node == k)
    // {
    //     return true; 
    // }
    // else
    // {
    //     return search(k, n->next); 
    // }
}

void print_bool(bool b)
{
    if (b)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

void free_list(node *head)
{
    if (!head)
    {
        return;
    }
    free_list(head->next);

    free(head);
}