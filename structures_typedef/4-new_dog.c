#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int len1, len2, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	len1 = _strlen(name);
	ptr->name = malloc(sizeof(char) * (len1 + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (i <= len1)
	{
		ptr->name[i] = name[i];
		i++;
	}
	ptr->age = age;
	len2 = _strlen(owner);
	ptr->owner = malloc(sizeof(char) * (len2 + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (i <= len2)
	{
		ptr->owner[i] = owner[i];
		i++;
	}
	return (ptr);
}

