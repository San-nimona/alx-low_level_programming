#include <stdlib.h>
#include "dog.h"

/**
   * new_dog - creates a new dog
   * @name: name of dog
   * @age: age of dog
   * @owner: owner of dog
   * Return: pointer to new dog
   */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int new, old, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	new = 0;
	while (name[new])
		new++;
	new++;
	(*dog).name = malloc(new * sizeof(char));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	i = 0;
	while (i < new)
	{
		dog->name[i] = name[i];
		i++;
	}
	(*dog).age = age;
	old = 0;
	while (owner[old])
		old++;
	old++;
	(*dog).owner = malloc(old * sizeof(char));
	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	i = 0;
	while (i < old)
	{
		(*dog).owner[i] = owner[i];
		i++;
	}
	return (dog);
}
