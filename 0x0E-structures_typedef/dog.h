#ifndef DOG_H
#define DOG_H

/**
 * struct dog - holds basic info about a dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strdup(char *str);
int _strlen(char *s);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
