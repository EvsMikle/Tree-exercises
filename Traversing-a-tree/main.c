#include "traverseTree.h"

/**
 * main - checks the code
 * Return: always 0
 */

int main(void)
{
    int num_nodes, data;
    Tree *root;
    char choice;

    printf("Enter number of nodes ");
    scanf("%d", &num_nodes);
    printf("What's the number for root ");
    scanf("%d", &data);
    root = create_root(data);
    for (int i = 1; i < num_nodes; i++)
    {
        printf("What's the number for this child ");
        scanf("%d", &data);
        root = insert_child(root, data);
    }

    printf("Choose your favorite traverse i: infixe, p: prefixe, o: postfixe ");
    scanf("%c", &choice);

    if (choice == 'i')
        infixe(root);
    else if (choice == 'p')
        prefixe(root);
    else
        postfixe(root);
    return 0;
}