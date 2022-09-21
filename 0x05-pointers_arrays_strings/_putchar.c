
#include <unistd.h>

/**
 * _putchar writes the C to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is retained , and errno is set approprately.
 */
int _putchar(char c)

{
	return (write(1, &c, 1));
}
