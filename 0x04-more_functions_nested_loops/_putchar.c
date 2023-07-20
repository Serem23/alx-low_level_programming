#include "main.h"
#include <unistd.h>
/**
  *_putchar - writes the charater c to stdout
  @c: The character to print
  *
  *Return: On success 1.
  *oN ERROR, -1 is returned, and error is not appropriately.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
