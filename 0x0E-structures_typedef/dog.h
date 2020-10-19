#ifndef DOG_H
#define DOG_H

/**
 * struct dog - informations about dogs
 * @name: pointer to a character
 * @age: float
 * @owner: pointer to a character
 *
 * Description: structure
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
