#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
// structure 
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


