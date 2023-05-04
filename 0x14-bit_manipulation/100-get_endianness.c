#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: 0 (Big endian); 1 (Little endian)
 */
int get_endianness(void)
{
	int num = 0x0f;
	int *p;
	char *c;

	p = &num;
	c = (char *) p;
	/**
	 * Let c point to the first byte of the integer num.
	 * If the machine is Big Endian the first byte of num will be 0.
	 * Otherwise, if it is Little Endian, the first byte will not be 0.
	 */
	if (*c)
		return (1);
	return (0);
}
