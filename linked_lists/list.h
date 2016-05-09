#ifndef _LIST_H_
#define _LIST_H_
#include "stdio.h"

typedef struct List {
  char *str;
  struct List *next;
} List;

#endif
