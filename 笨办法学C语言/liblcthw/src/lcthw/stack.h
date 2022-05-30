#ifndef _lcthw_Stack_h
#define _lcthw_Stack_h

#include <lcthw/list.h>

typedef List Stack;

#define Stack_create() List_create()
#define Stack_peek(s) List_last(s)
#define Stack_push(s, e) List_push(s, e)
#define Stack_pop(s) List_pop(s)
#define Stack_count(s) List_count(s)
#define Stack_destroy(s) List_destroy(s)

#define STACK_FOREACH(S, V) LIST_FOREACH(S, last, prev, cur)

#endif // _lcthw_Stack_h