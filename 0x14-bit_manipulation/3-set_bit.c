#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: Number
 * @index: starting from 0
 * Return: 1 if it worked
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n += 1 << index;
	{
	return (1);
	}
	return (-1);
}
