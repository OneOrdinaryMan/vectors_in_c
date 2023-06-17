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
void cleanup(vector *);
void delete_vector(vector *);
#endif
