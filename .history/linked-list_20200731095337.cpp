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
void displaylis
