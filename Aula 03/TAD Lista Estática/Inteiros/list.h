#ifndef LIST_H
#define LIST_H
#include <stdbool.h>

typedef struct list tList;

tList *listCreate();
bool listAdd(tList*, int);
void listPrint(tList*);
void listDelete(tList*);

#endif
