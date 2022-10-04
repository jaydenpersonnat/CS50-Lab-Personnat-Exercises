#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct node
{
    int key;
    struct node *left;
    struct node *right;
}
node;

int size(node *root);
node *insert(int k, node *root);
void print_bool(bool b);
bool search(int k, node *root);

int main(void)
{
    int nums[] = {14, 3, 17, 4, 5, 20, 5, 18, 3, 21, 22, 20, 7, 9, 25, 27, 29, 34};
    node *tr = NULL;

    int n = sizeof(nums)/sizeof(nums[0]);

    // preprocess BST
    for (int i = 0; i < n; i++)
    {
        tr = insert(nums[i], tr);
    }

    // ensure everything was inserted
    for (int i = 0; i < n; i++)
    {
        print_bool(search(nums[i], tr));
    }

    // find size of bst - should give n
    if (n == size(tr))
    {
        printf("Size is correct? Yes!!\n");
    }
    else
    {
        printf("Size is incorrect\n");
    }
}

int size(node *root)
{
    // TODO: return size of bst
    return 0
}


// Creates a Binary Search Tree
node *insert(int k, node *root)
{
    // create new node
    node *new_node = malloc(sizeof(node));
    new_node->key = k;
    new_node->left = NULL;
    new_node->right = NULL;

    if (!root)
    {
        // set key to value and left and right pointers to NULL
        // root = new_node;
        return new_node;
    }
    else if (k < root->key)
    {
        // insert into left subtree
        root->left = insert(k, root->left);
    }
    else
    {
        // insert into right subtree
        root->right = insert(k, root->right);
    }
    return root;

}

bool search(int k, node *root)
{
    if (!root)
    {
        return false;
    }
    else if (k == root->key)
    {
        return true;
    }
    else if (k < root->key)
    {
        // search left subtree
        return search(k, root->left);
    }
    else
    {
        // search right subtree 
        return search(k, root->right);
    }
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