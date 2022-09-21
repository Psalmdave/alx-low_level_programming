#include <unistd.h>
#include "main.h"

/**
 *_putchar - writes the character c to standout
 *@c: The character to point
 *
 *Return: on success 1.
 *on error, -1 is returned, and errno is set appropriatly.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
