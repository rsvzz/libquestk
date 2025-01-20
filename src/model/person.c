#include "../../inc/person.h"
#include <stdlib.h>
Person* create_person(char *name, int ago)
{
    Person *per = malloc(sizeof(Person));
    per->name = name;
    per->ago = ago;
    return per;
}