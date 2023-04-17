#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - a structure for a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: a structure representing a dog
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* init_dog - initializes a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* print_dog - prints a struct dog */
void print_dog(struct dog *d);

/* dog_t - typedef for struct dog */
typedef struct dog dog_t;

/* new_dog - creates a new dog */
dog_t *new_dog(char *name, float age, char *owner);

/* free_dog - frees dogs */
void free_dog(dog_t *d);

#endif /* MAIN_H */

