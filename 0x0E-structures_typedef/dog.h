#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 *@name: doge name
 *@age: Doge age
 *@owner: Doge owner
 * Return: owner's name
 */


struct dog
{
	 char *name;
	 float age;
	 char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
