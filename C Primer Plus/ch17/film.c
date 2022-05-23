#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void showmovies(Item item);
char *s_gets(char * st, int n);

int main(void) {
  List movies;
  Item temp;

  InitializeList(&movies);
  if (ListIsFull(&movies)) {
    fprintf(stderr, "No memory available! Bye!\n");
    exit(EXIT_FAILURE);
  }

  puts("Enter first movie title:");
  while (s_gets(temp.title, TSIZE) != NULL && temp.title[0] != '\0') {
    puts("Enter your rating <0-10>:");
    scanf("%d", &temp.rating);
    while (getchar() != '\n') {
      continue;
    }
    if (!AddItem(temp, &movies)) {
      fprintf(stderr, "Problem allocating memory\n\n");
      break;
    }
    if (ListIsFull(&movies)) {
      puts("The List is now full.");
      break;
    }
    puts("Enter next movie title (empty line to stop):");
  }

  if (ListIsEmpty(&movies)) {
    printf("No data entered.");
  } else {
    printf("Here is the movie list:\n");
    Traverse(&movies, showmovies);
  }
  printf("You entered %d movies.\n", ListItemCount(&movies));

  EmptyList(&movies);
  printf("Bye!\n");

  return 0;
}

void showmovies(Item item) {
  printf("Movie: %s Rating: %d\n", item.title, item.rating);
}

char *s_gets(char *st, int n) {
  char *ret_val;
  char *find;

  ret_val = fgets(st, n, stdin);
  if (ret_val) {
    find = strchr(st, '\n');
    if (find) {
      *find = '\0';
    } else {
      while (getchar() != '\n') {
        continue;
      }
    }
  }

  return ret_val;
}