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
    ls 
}