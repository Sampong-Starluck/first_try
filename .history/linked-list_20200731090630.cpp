#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
// structure 
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

