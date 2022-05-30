#ifndef _lcthw_Queue_h
#define _lcthw_Queue_h

#include <lcthw/list.h>

typedef List Queue;

#define Queue_create() List_create()
#define Queue_peek(q) List_first(q)
#define Queue_send(q, e) List_push(q, e)
#define Queue_recv(q) List_shift(q)
#define Queue_count(q) List_count(q)
#define Queue_destroy(q) List_destroy(q)

#define QUEUE_FOREACH(Q, V) LIST_FOREACH(Q, first, next, cur)

#endif // _lcthw_Queue_h