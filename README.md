# Vectors in C
Vectors in C are just arrays created with malloc. When array grows the contents of the old array is moved into new array and the pointer to the new array is returned.
Every method applicable for the array is applicable to the vector. Additionally, following functions are available,

- [x] Push
- [x] Pop
- [ ] Remove head
- [ ] Insert at index
- [ ] Remove at index

## Vector struct
The vector struct contains the pointer to the vector, the length of the vector, the capacity it holds in the vector.

__Psuedo Code__
```c
typedef struct {
  int *vec_pointer;
  int length;
  int capacity;
} vector;
```
## Push
Push function adds the value at the length of the array and the array length is incremented. If capacity - length < 3, the capacity increses by 10.

__Psuedo Code__
```c
void push(vector *input_vector, int value) {
  increase_capacity(input_vector);
  input_vector->vec_pointer[input_vector->length++] = value;
}
```
## Pop
Pop will reduce the length of the array and the value at the last element is returned. If capacity - length > 15, the capacity decreases by 10.

__Psuedo Code__
```c
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
```
## Remove head
## Insert at index
## Remove at index
# Licence
The project is licenced under <mark> GNU GPL V3.0</mark> licence. Feel free to use the project.
