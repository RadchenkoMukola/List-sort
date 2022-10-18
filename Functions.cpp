#include "Functions.h"

using std::cout;
using std::cin;
using std::endl;

template<typename T>
Node<T>* Head(int n)
{
    Node<T>* p = NULL; Node<T>* q = NULL;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        p = new Node<T>;
        p->data = x;
        p->next = q;
        q = p;
    }
    return p;
}
template<typename T>
void printlist(Node<T>* root)
{
    while (root)
    {
        cout << root->data << " ";
        root = root->next;
    }
}
template<typename T>
void del(Node<T>* head)
{
    Node<T>* p;
    while (head)
    {
        p = head;
        head = head->next;
        delete p;
    }
}
template<typename T>
int maxel(Node<T>* head)
{
    Node<T>* p = head;
    int x = -100000;
    while (p)
    {
        if (p->data > x)
        {
            x = p->data;
        }
        p = p->next;
    }
    return x;
}
template<typename T>
int minel(Node<T>* head)
{
    Node<T>* p = head;
    int x = 1000000;
    while (p)
    {
        if (p->data < x)
        {
            x = p->data;
        }
        p = p->next;
    }
    return x;
}
template<typename T>
Node<T>* reverse(Node<T>* list)
{
    Node<T>* reversed_list = NULL;

    for (Node<T>* node = list, next_node; node != NULL; node = next_node)
    {
        next_node = node->next;
        node->next = reversed_list;
        reversed_list = node;
    }

    return reversed_list;
}