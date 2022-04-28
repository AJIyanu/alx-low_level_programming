#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * powtwo - does the of two rexursively
 * @p: what power
 * Return: result
 */

unsigned int powtwo(unsigned int p)
{
	if (p == 0)
		return (1);
	if (p > 1)
		return (2 * powtwo(p - 1));
	else
		return (2);
}

unsigned int binary_to_uint(const char *b);

void print_binary(unsigned long int n);

int get_bit(unsigned long int n, unsigned int index);

int set_bit(unsigned long int *n, unsigned int index);

int clear_bit(unsigned long int *n, unsigned int index);

unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
