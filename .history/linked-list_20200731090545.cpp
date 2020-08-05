#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct element
{
    int data;
    struct element *next;
};
typedef struct element element;
struct list
{
    int n;
    element *
};