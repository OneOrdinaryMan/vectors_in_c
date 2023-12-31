#ifndef LIB_H
#define LIB_H
#include <stdio.h>
#include <stdlib.h>
typedef struct {
  int *vec_pointer;
  int length;
  int capacity;
} vector;
vector create_vector();
void increase_capacity(vector *);
void push(vector *, int);
int pop(vector *);
int remove_head(vector *);
void insert_at_index(vector *, int, int);
int remove_at_index(vector *, int);
void print_vector(vector *);
void cleanup(vector *);
void delete_vector(vector *);
#endif
