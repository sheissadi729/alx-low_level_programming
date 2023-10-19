#include "dog.h"
#include <stdlib.h>
int len(char *s);
/**
 * new_dog - creates a new dog
 * @name: pointer to name of the dog
 * @age: age of the dog
 * @owner: pointer to owner of dog
 * Return: pointer to the new dog of type dog_t created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int i;
	
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = malloc((len(name) + 1) * sizeof(char));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		p->name[i] = name[i];
	p->name[i] = '\0';
	p->age = age;
	p->owner = malloc((len(owner) + 1) * sizeof(char));
	if (p->owner == NULL)
	{
		free(p);
		free(p->name);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		p->owner[i] = owner[i];
	p->owner[i] = '\0';
	return (p);
}
/**
 * len - gets the length of a string
 * Return: length
 */
int len(char *s)
{
	int i, l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	return (l);
}
