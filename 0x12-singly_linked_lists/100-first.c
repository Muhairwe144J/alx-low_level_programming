#include <stdio.h>

/**
 * hare_and_tortoise - Prints "You're beat! and yet, you must allow,"
 *                     "I bore my house upon my back!"
 *
 * Description: This function is called automatically before the main
 *              function is executed due to the __attribute__((constructor))
 *              attribute.
 */
void hare_and_tortoise(void) __attribute__((constructor));

void hare_and_tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
