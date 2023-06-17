#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *vec_pointer;
  int length;
  int capacity;
} vector;

vector create_vector() {
  vector return_vector;
  int initial_capacity = 10;
  int initial_length = 0;
  return_vector.capacity = initial_capacity;
  return_vector.length = initial_length;
  return_vector.vec_pointer = malloc(sizeof(int) * return_vector.capacity);
  return return_vector;
}

void increase_capacity(vector *input_vector) {
  if ((input_vector->capacity - input_vector->length) > 3) {
    return;
  }
  input_vector->vec_pointer = realloc(
      input_vector->vec_pointer, sizeof(int) * input_vector->capacity + 10);
  input_vector->capacity += 10;
}

void cleanup(vector *input_vector) {
  if ((input_vector->capacity - input_vector->length) < 15) {
    return;
  }
  input_vector->vec_pointer = realloc(
      input_vector->vec_pointer, sizeof(int) * input_vector->capacity - 10);
  input_vector->capacity -= 10;
}

void delete_vector(vector *input_vector) {
  free(input_vector->vec_pointer);
  input_vector->vec_pointer = NULL;
  input_vector->length = 0;
  input_vector->capacity = 0;
}
