#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: pointer to the buffer to print
 * @size: number of bytes of the buffer to print
 */
void print_buffer(char *b, int size)
{
	int i, j, line_start;
	
	if (size <= 0)
		printf("\n");
	for (i = 0; i < size; i++)
	{
		line_start = i - (i % 10);
		if (i % 10 == 0)
		{
			printf("%08x:", line_start);
			for (j = 0; j < 10; j += 2)
			{
				if (i + j >= size)
				{
					for (; j < 10; j++)
					{
						printf("   ");
					}
					break;
				}
				printf(" %02x%02x ", *(b + i + j), *(b + i + j + 1));
			}
		}
		if (b[i] < 32 || b[i] > 126)
			printf(".");
		else
			printf("%c", b[i]);
		if (i % 10 == 9 && i != 0)
			printf("\n");
	}
	printf("\n");
}
