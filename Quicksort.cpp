#include "Quicksort.h"
template<typename T>
void quicksortel(Node<T>* head)
{
    Node<T>* p;
    Node<T>* left = head;
    Node<T>* right = head->next;

    Node<T>* temp = new Node;

    while (left->next) {
        while (right) {
            if ((left->data) < (right->data)) {
                temp->data = left->data;
                left->data = right->data;
                right->data = temp->data;
            }
            right = right->next;
        }
        left = left->next;
        right = left->next;
    }

}