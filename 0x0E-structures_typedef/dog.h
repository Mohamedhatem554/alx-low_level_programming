#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog data
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


#endif

// additional functions

void init_dog(struct dog *d, char *name, float age, char *owner);