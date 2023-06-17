#include "lib/lib.h"
#include <stdio.h>
int main() {
  vector input_vector = create_vector();
  for (int i = 0; i < 20; i++) {
    push(&input_vector, i);
  }
  print_vector(&input_vector);
  delete_vector(&input_vector);
  return 0;
}
