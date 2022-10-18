#include "UI.h"

using namespace std;

int start()
{
    int n = 0;
    cout << "Enter size of the List -";
    cin >> n;
    cout << endl;
    cout << "*====================*" << endl;
    cout << "*l     Menu         l*" << endl;
    cout << "*====================*" << endl;
    cout << "*l 1.int            l*" << endl;
    cout << "*l 2.double         l*" << endl;
    cout << "*l 3.string         l*" << endl;
    cout << "*====================*" << endl;
    char x;
    char func;
    char func1;
    cout << "Choose type of data -";
    cin >> x;
    if (x == '1')
    {
        Node<int>* p = NULL;
        cout << "Enter the elements" << endl;
        p = Head<int>(n);

        cout << "*====================*" << endl;
        cout << "*l     Menu         l*" << endl;
        cout << "*====================*" << endl;
        cout << "*l 1.quicksort      l*" << endl;
        cout << "*l 2.mergesort      l*" << endl;
        cout << "*l 3.insertionsort  l*" << endl;
        cout << "*====================*" << endl;


        cout << "Choice -";
        cin >> func;
        cout << endl;

        if (func == '1')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                quicksortel(p);
                Node<int>* a = reverse(p);
                printlist(a);
                return 0;
            }
            if (func1 == '2')
            {
                quicksortel(p);
                printlist(p);
                return 0;
            }
        }
        if (func == '2')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                mergesortel(&p);
                printlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                mergesortel(&p);
                Node<int>* a = reverse(p);
                printlist(a);
                return 0;
            }
        }
        if (func == '3')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                insertionsortel(&p);
                printlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                insertionsortel(&p);
                Node<int>* a = reverse(p);
                printlist(a);
                return 0;
            }
        }
    }
    if (x == '2')
    {
        Node<double>* p = NULL;
        cout << "Enter the elements" << endl;
        p = Head<double>(n);
        cout << "*====================*" << endl;
        cout << "*l     Menu         l*" << endl;
        cout << "*====================*" << endl;
        cout << "*l 1.quicksort      l*" << endl;
        cout << "*l 2.mergesort      l*" << endl;
        cout << "*l 3.insertionsort  l*" << endl;
        cout << "*====================*" << endl;


        cout << "Choice -";
        cin >> func;
        cout << endl;

        if (func == '1')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                quicksortel(p);
                Node<double>* a = reverse(p);
                printlist(a);
                return 0;
            }
            if (func1 == '2')
            {
                quicksortel(p);
                printlist(p);
                return 0;
            }
        }
        if (func == '2')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                mergesortel(&p);
                printlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                mergesortel(&p);
                Node<double>* a = reverse(p);
                printlist(a);
                return 0;
            }
        }
        if (func == '3')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                insertionsortel(&p);
                printlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                insertionsortel(&p);
                Node<double>* a = reverse(p);
                printlist(a);
                return 0;
            }
        }
    }
    if (x == '3')
    {
        Node<string>* p = NULL;
        cout << "Enter the elements" << endl;
        p = Head<string>(n);
        cout << "*====================*" << endl;
        cout << "*l     Menu         l*" << endl;
        cout << "*====================*" << endl;
        cout << "*l 1.quicksort      l*" << endl;
        cout << "*l 2.mergesort      l*" << endl;
        cout << "*l 3.insertionsort  l*" << endl;
        cout << "*====================*" << endl;


        cout << "Choice -";
        cin >> func;
        cout << endl;

        if (func == '1')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                quicksortel(p);
                Node<string>* a = reverse(p);
                printlist(a);
                return 0;
            }
            if (func1 == '2')
            {
                quicksortel(p);
                printlist(p);
                return 0;
            }
        }
        if (func == '2')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                mergesortel(&p);
                printlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                mergesortel(&p);
                Node<string>* a = reverse(p);
                printlist(a);
                return 0;
            }
        }
        if (func == '3')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                insertionsortel(&p);
                printlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                insertionsortel(&p);
                Node<string>* a = reverse(p);
                printlist(a);
                return 0;
            }
        }
    }

    return 0;

}