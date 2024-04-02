typedef struct object {
    const char *description;
    const char *tag;
    struct object *location;
} OBJECT;

OBJECT objs[];

#define basement (objs + 0)
#define elevator (objs + 1)
// #define lobby (objs + 2)
// #define manOnTheGround (objs + 3)
#define recorder (objs + 2)
#define player (objs+3)
#define endOfObjs (objs+4)

