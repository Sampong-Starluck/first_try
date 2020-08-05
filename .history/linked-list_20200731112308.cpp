#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
// structure for single linked list
struct element
{
    int data;
    struct element *next;
};
typedef struct element element;
struct list
{
    int n;
    element *head, *tail;
};
typedef struct list list;
// function and procedure
list *createList()
{
    list *ls;
    ls = new list();
    ls ->n = 0;
    ls ->head = NULL;
    ls ->tail = NULL;

    return ls;
}

void insert_begin(list *ls,int newData)
{
    element *e;
    e = new element;
    e ->data = newData;
    e ->next = ls ->head;
    ls ->head = e;
    if (ls ->n == 0)
    {
        ls ->tail = e;
    }
    ls ->n = ls ->n +1;
}
void insert_end(list *ls,int newData)
{
    element *e,*tmp;
    e = new element;
    if (ls ->n == 0)
    {
        insert_begin(ls, newData);
    }
    else
    {
        e->data = newData;
        e->next = NULL;
        tmp = ls->head;
        while (tmp ->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp ->next = e;
        ls->n = ls->n + 1;
    }
    
}
void delete_begin(list *ls)
{
    element *tmp;
    tmp = ls->head;
    ls->head = ls->head->next;

    delete tmp;
    ls->n = ls->n - 1;
}
void displaylist(list *ls)
{
    element *tmp;
    tmp = ls ->head;
    while (tmp != NULL)
    {
        cout << tmp ->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    list *l;
    l = createList();
    insert_begin(l, 12);
    insert_begin(l, 91);
    insert_begin(l, 43);
    insert_begin(l, 56);
    insert_begin(l, 76);
    insert_begin(l, 90);
    insert_begin(l, 112);
    displaylist(l);
    insert_end(l, 1);
    displaylist(l);
}
