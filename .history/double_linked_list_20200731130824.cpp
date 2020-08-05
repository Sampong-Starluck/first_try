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
void insert_begin(list *ls,int newData)
{
    node *e;
    e = new node();
    e ->data = new 
}