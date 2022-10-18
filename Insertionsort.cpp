#include "Insertionsort.h"

template<typename T>
void sortedInsert(struct Node<T>** head_ref, Node<T>* new_node)
{
    Node<T>* current;
    if (*head_ref == NULL || (*head_ref)->data >= new_node->data)
    {
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else
    {
        current = *head_ref;
        while (current->next != NULL &&
            current->next->data < new_node->data)
        {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}
template<typename T>
void insertionsortel(struct Node<T>** head_ref)
{
    struct Node<T>* sorted = NULL;
    struct Node<T>* current = *head_ref;
    while (current != NULL)
    {
        struct Node<T>* next = current->next;
        sortedInsert(&sorted, current);
        current = next;
    }

    *head_ref = sorted;
}