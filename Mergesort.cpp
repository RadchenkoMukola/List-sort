#include "Mergesort.h"
template<typename T>
Node<T>* merge(Node<T>* h1, Node<T>* h2)
{
	Node<T>* t1 = new Node<T>;
	Node<T>* t2 = new Node<T>;
	Node<T>* temp = new Node<T>;

	if (h1 == NULL)
		return h2;

	if (h2 == NULL)
		return h1;

	t1 = h1;

	while (h2 != NULL)
	{

		t2 = h2;
		h2 = h2->next;
		t2->next = NULL;


		if (h1->data > t2->data)
		{
			t2->next = h1;
			h1 = t2;
			t1 = h1;
			continue;
		}

	flag:
		if (t1->next == NULL)
		{
			t1->next = t2;
			t1 = t1->next;
		}
		else if ((t1->next)->data <= t2->data)
		{
			t1 = t1->next;
			goto flag;
		}
		else
		{

			temp = t1->next;
			t1->next = t2;
			t2->next = temp;
		}
	}


	return h1;
}


template<typename T>
void mergesortel(Node<T>** head)
{
	Node<T>* first = new Node<T>;
	Node<T>* second = new Node<T>;
	Node<T>* temp = new Node<T>;
	first = *head;
	temp = *head;

	if (first == NULL || first->next == NULL)
	{
		return;
	}
	else
	{
		while (first->next != NULL)
		{
			first = first->next;
			if (first->next != NULL)
			{
				temp = temp->next;
				first = first->next;
			}
		}
		second = temp->next;
		temp->next = NULL;
		first = *head;
	}

	mergesortel(&first);
	mergesortel(&second);

	*head = merge(first, second);
}