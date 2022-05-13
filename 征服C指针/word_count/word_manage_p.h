#ifndef WORD_MANAGE_P_H_INCLUDED
#define WORD_MANAGE_P_H_INCLUDED

typedef struct {
  char *name;
  int count;
} Word;

#define WORD_NUM_MAX 10000

extern Word word_array[];
extern int num_of_word;

#endif