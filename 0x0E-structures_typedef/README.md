dog.h
Ths funct defines a new type struct dog with the following elements:
name, type char *
age, type float
owner, type char *

1-init_dog.c
This function initializes a variable of type struct dog.

2-print_dog.c
This create a function that prints a struct dog.
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL, don't print anything.

dog.h
This program will define a new type dog_t as a new name for the type struct dog.

4-new_dog.c
This function creates a new dog.
It will initialize each attribute with the appropriate value passed as argument.
If the function fails to allocate memory for new_dog, it should return NULL.

5-free_dog.c
This program will write a function that frees dogs.
