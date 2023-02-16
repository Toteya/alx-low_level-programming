#include <unistd.h>
#include <string.h>

/**
 * main - Print some text to standard error
 *
 * Return: Always 1
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, quote, strlen(quote));
	return (1);
}
