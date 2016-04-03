/*
 * hashtable.h
 *
 *  An adaptation of the hashtable impl. found at: http://www.sparknotes.com/cs/searching/hashtables/section3.rhtml
 */

#ifndef HASHTABLE_H_
#define HASHTABLE_H_

#include "queue.h"
#include "shared.h"

typedef struct _List H_List;

typedef struct _List {
  char *id;
  Object *obj;
  H_List *next;
} H_List;

typedef struct {
  int size; /* the size of the table */
  H_List **table; /* the table elements */
} Hashtable;

Hashtable *hashtable_create(int size);
unsigned int hash(const Hashtable *hashtable, const char *str);
Object *hashtable_lookup(const Hashtable *hashtable, const char *str);
int hashtable_insert(Hashtable *hashtable, const char *str, Object *obj);
void hashtable_free(Hashtable *hashtable, Deleter del);
void hashtable_iterate(Hashtable *hashtable, Action act);

#endif /* HASHTABLE_H_ */
