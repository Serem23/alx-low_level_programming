#include<stdio.h>

/**
  *main - prints all the possible combination of a single digit number
  *combination of a single digit number
  *Return: Always 0 (success)
  */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
