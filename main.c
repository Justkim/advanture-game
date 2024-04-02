#include "parsexec.h"
#include <stdbool.h>
#include <stdio.h>
static char input[100] = "look around";


static bool getInput(void)
{
    printf("What do you do? --> ");
    return fgets(input, sizeof input, stdin) != NULL;
}
int main(void)
{
    printf("Welcome to CyberCity! ");
    printf("It is very dystopian in here!");
    while (parseAndExecute(input) && getInput());
    printf("\nBye!\n");

    return 0;

}