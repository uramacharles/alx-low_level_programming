#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @buff: buffer.
 * @sbuff: size of buffer.
 * Return: no return.
 */
void print_buffer(char *buff, int sbuff)
{
	int i, j, k;

	if (sbuff <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < sbuff; i += 10)
		{
			printf("%.8x:", i);
			for (j = i; j < i + 10; j++)
			{
				if (j % 2 == 0)
					printf(" ");
				if (j < sbuff)
					printf("%.2x", *(buff + j));
				else
					printf("  ");
			}
			printf(" ");
			for (k = i; k < i + 10; k++)
			{
				if (k >= sbuff)
					break;
				if (*(buff + k) < 32 || *(buff + k) > 126)
					printf("%c", '.');
				else
					printf("%c", *(buff + k));
			}
			printf("\n");
		}
	}
}
