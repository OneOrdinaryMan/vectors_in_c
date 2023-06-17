#include "lib/lib.h"
#include <stdio.h>
int main() {
  vector input_vector = create_vector();
  delete_vector(&input_vector);
  return 0;
}
