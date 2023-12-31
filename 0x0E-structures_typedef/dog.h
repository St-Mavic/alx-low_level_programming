#ifndef DOG_H
#define DOG_H
/*
 * dog_t - a new type
 */

typedef struct dog dog_t;
/**
 * struct dog - holds a collection of items
 * @name: first member
 * @age: second member
 * @owner: third member
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
