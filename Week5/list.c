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

    // insert at head of linked list and return head
    return n;
}

bool search(int k, node *n)
{
    // two ways to do this: using recursion or iteration
    return false;
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