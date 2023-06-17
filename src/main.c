#include "lib/lib.h"
#include <stdio.h>
int main() {
  vector input_vector = create_vector();
  for (int i = 0; i < 30; i++) {
    push(&input_vector, i);
  }
  for (int i = 0; i < 20; i++) {
    pop(&input_vector);
  }
  remove_head(&input_vector);
  insert_at_index(&input_vector, 0, 0);
  print_vector(&input_vector);
  delete_vector(&input_vector);
  return 0;
}
