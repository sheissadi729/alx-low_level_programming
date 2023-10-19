#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog class
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
