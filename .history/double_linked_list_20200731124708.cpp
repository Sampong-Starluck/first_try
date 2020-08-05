#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
// structure for double linkl
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


