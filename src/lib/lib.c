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
  input_vector->capacity += 10;
  input_vector->vec_pointer =
      realloc(input_vector->vec_pointer, sizeof(int) * input_vector->capacity);
}

void cleanup(vector *input_vector) {
  if ((input_vector->capacity - input_vector->length) < 15) {
    return;
  }
  input_vector->capacity -= 10;
  input_vector->vec_pointer =
      realloc(input_vector->vec_pointer, sizeof(int) * input_vector->capacity);
}

void push(vector *input_vector, int value) {
  increase_capacity(input_vector);
  input_vector->vec_pointer[input_vector->length++] = value;
}

int pop(vector *input_vector) {
  if (input_vector->length == 0) {
    printf("Nothing to pop!\n");
    return 0;
  }
  int return_value = input_vector->vec_pointer[--input_vector->length];
  input_vector->vec_pointer[input_vector->length] = 0;
  cleanup(input_vector);
  return return_value;
}

int remove_head(vector *input_vector) {
  if (input_vector->length == 0) {
    printf("vector is empty\n");
    return 0;
  }
  int return_value = input_vector->vec_pointer[0];
  for (int i = 0; i < input_vector->length - 1; i++) {
    input_vector->vec_pointer[i] = input_vector->vec_pointer[i + 1];
  }
  input_vector->length--;
  cleanup(input_vector);
  return return_value;
}

void insert_at_index(vector *input_vector, int index, int value) {
  if (index > input_vector->length) {
    printf("Index out of bounds.\n");
    return;
  }
  increase_capacity(input_vector);
  for (int i = input_vector->length; i > index; i--) {
    input_vector->vec_pointer[i] = input_vector->vec_pointer[i - 1];
  }
  input_vector->vec_pointer[index] = value;
  input_vector->length++;
}

int remove_at_index(vector *input_vector, int index) {
  if (index >= input_vector->length) {
    printf("Index out of bounds.\n");
    return 0;
  }
  int return_value = input_vector->vec_pointer[index];
  for (int i = index; i < input_vector->length - 1; i++) {
    input_vector->vec_pointer[i] = input_vector->vec_pointer[i + 1];
  }
  input_vector->vec_pointer[--input_vector->length] = 0;
  cleanup(input_vector);
  return return_value;
}

void print_vector(vector *input_vector) {
  if (input_vector->length == 0) {
    printf("The vector is empty!\n");
    return;
  }
  for (int i = 0; i < input_vector->length; i++) {
    printf("%d\t", input_vector->vec_pointer[i]);
  }
  printf("\n");
}

void delete_vector(vector *input_vector) {
  free(input_vector->vec_pointer);
  input_vector->vec_pointer = NULL;
  input_vector->length = 0;
  input_vector->capacity = 0;
}
