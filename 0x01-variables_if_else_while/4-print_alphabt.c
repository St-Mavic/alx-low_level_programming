#include <stdio.h>
/**
 * main - entry point
 *
 * Return:Always 0 (Successful)
 */

int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
if (i != 'q' && i != 'c')
	putchar(i);
putchar('\n');
return (0);
}
