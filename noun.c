#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "object.c"

static bool objectHasTag(OBJECT *obj, const char *noun)
{
    return noun != NULL && *noun!= '\0' && strcmp(noun, obj->tag) == 0;
}
static OBJECT *getObject(const char *noun)
{
    OBJECT *obj, *res = NULL;
    for (obj = objs, obj < )
}