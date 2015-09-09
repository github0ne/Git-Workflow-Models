
#include <stdio.h>

/* Initial Hello World */
char hello_world[] = "Hello World!";
main() 
{
    // Initially, this will only print 'H'
    printf("message = %c\n",*hello_world);
}
/**
 * Initially you will start off with a Hello World application.
 * 
 * Jim will make a change to the program, so that it prints Hello World.
 *          printf("Beginning message\n");
 *          printf("message = %s\n", hello_world);
 * 
 * Karen will also make a change to the program but she will only write 
 *          printf("message = %s\n", hello_world);
 *          printf("Finishing message\n");
 * Jim will commit. Then Karen will fail to commit.
 * Karen will have to deal with the merge conflict.
 * 
 * 
 **/ 
