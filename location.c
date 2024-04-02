#include <stdio.h>
#include <string.h>

struct location {
    const char *description;
    const char *tag;
};


struct location locs[] = {{"a dark basement full of electronic boards and wires.", "basement"}, {"Elevator", "elevator"}};

#define numberOfLocotions (sizeof locs/sizeof *locs)

static unsigned locationOfPlayer = 0;

void executeLook(const char *noun)
{
    
    if (noun != NULL && strcmp(noun, "around") == 0)
    {
        printf("You are in %s.\n", locs[locationOfPlayer].description);
    }
    else
    {
        printf("Not sure what you want to see.\n");
    }
}

void executeGo(const char* noun)
{

    for(unsigned int i=0; i < numberOfLocotions; i++)
    {
        if (noun != NULL && strcmp(locs[i].tag, noun))
        {
            if(locationOfPlayer == i)
            {
                printf("Already there, can't get closer.\n");
            }
            else
            {
                locationOfPlayer = i;
                printf("You moved to %s", locs[i].tag);
                executeLook("around");
            }
        }
        return;
    }
    printf("I don't understand where u want to go.");
}
