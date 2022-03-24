#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @x: number one.
 * @y: number two.
 * @buff: buffer that the function will use to store the result.
 * @sbuff: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *x, char *y, char *buff, int sbuff)
{
	int x1 = 0, y1 = 0, op, bg, dr1, dr2, add = 0;

	while (*(x + x1) != '\0')
		x1++;
	while (*(y + y1) != '\0')
		y1++;
	if (x1 >= y1)
		bg = x1;
	else
		bg = y1;
	if (sbuff <= bg + 1)
		return (0);
	buff[bg + 1] = '\0';
	x1--, y1--, sbuff--;
	dr1 = *(x + x1) - 48, dr2 = *(y + y1) - 48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
		*(buff + bg) = (op % 10) + 48;
		else
			*(buff + bg) = '0';
		if (x1 > 0)
			x1--, dr1 = *(x + x1) - 48;
		else
			dr1 = 0;
		if (y1 > 0)
			y1--, dr2 = *(y + y1) - 48;
		else
			dr2 = 0;
		bg--, sbuff--;
	}
	if (*(buff) == '0')
		return (buff + 1);
	else
		return (buff);
}
