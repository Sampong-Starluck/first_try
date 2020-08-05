#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
// structure for double linked list
struct node
{
    int data;
    struct node *next, *previous;
};
typedef struct node node;
struct list
{
    int n;
    node *head, *tail;
};
typedef struct list list;
// function and procedure
list *createList()
{
    list *ls;
    ls = new list();
    ls->n = 0;
    ls->head = NULL;
    ls->tail = NULL;

    return ls;
}
void insert_begin(list *ls, int newData)
{
    node *e;
    e = new node();
    e->data = newData;
    e->next = ls->head;
    e->previous = NULL;
    if (ls->n == 0)
    {
        ls->tail = e;
    }
    if (ls->n != 0)
    {
        ls->head->previous = e;
    }
    ls->head = e;
    ls->n = ls->n + 1;
}
void insert_end(list *ls, int newData)
{
    node *e;
    e = new node();
    if (ls->n == 0)
    {
        insert_begin(ls, newData);
    }
    else
    {
        e->data = newData;
        e->previous = ls->tail;
        e->next = NULL;
        ls->tail->next = e;
        ls->tail = e;
        ls->n = ls->n + 1;
    }
}
void insert_position(list *ls, int newData, int position)
{
    node *e, *tmp;
    e = new node();
    tmp = ls->head;
    if (position == 1)
    {
        /* code */
        insert_begin(ls, newData);
    }
    else if (position > ls->n)
    {
        /* code */
        insert_end(ls, newData);
    }
    else if (tmp != NULL)
    {
        int i = 1;
        /* code */
        e->data = newData;
        e->next = tmp->next;
        e->previous = tmp;
        if (tmp->next != NULL)
        {
            tmp->next->previous = e;
            tmp->next = e;
        }
        else
        {
            cout << "Invalid position !!!" << endl;
        }
    }
}
void delete_begin(list *ls)
{
    node *tmp;
    tmp = ls->head;
    ls->head = ls->head->next;
    if (ls ->n >= 2)
    {
        ls->head->previous = NULL;
    }
    delete tmp;
    if (ls ->n == 1)
    {
        ls->tail = NULL;
    }
    ls->n = ls->n - 1;
}
void delete_end(list *ls)
{
    node *tmp;
    tmp = ls->tail;
    ls->tail = ls->tail->previous;
    if (ls ->n >= 2)
    {
        ls->tail->next = NULL;
    }
    delete tmp;
    if (ls -> n == 1)
    {
        ls->head = NULL;
    }
    ls->n = ls->n - 1;
}
void displaylist(list *ls)
{
    node *tmp;
    tmp = ls->head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    list *ls;
    int n,num, i = 1,amount;
    ls = createList();
    while (i != 0)
    {
        cout << "\n 1.Insert number from beginning. \n2.Insert number from endding" << endl;
        cout << "3.Insert number at the specific position \n4.delete number at the begin" << endl;
        cout << "5.Insert number at a specific position." << endl;
        cin >> n;

        switch (n)
        {
        case 1:
            cout << "Enter the amount element in linked-list: ";
            cin >> 
            break;
        case 2:
            break;
        default:
            break;
        }
    }
}