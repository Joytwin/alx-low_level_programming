#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A struct that holds information about dogs
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: A longer description of the struct dog.
 */
struct dog
{
char *name;
float age;
char *owner
};

/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
