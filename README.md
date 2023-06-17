# Vectors in C
Vectors in C are just arrays created with malloc. When array grows the contents of the old array is moved into new array and the pointer to the new array is returned.
Every method applicable for the array is applicable to the vector. Additionally, following functions are available,

- [ ] Push
- [ ] Pop
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
## Pop
## Remove head
## Insert at index
## Remove at index
# Licence
The project is licenced under <mark> GNU GPL V3.0</mark> licence. Feel free to use the project.
