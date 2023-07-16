#include<stdio.h>

/**
 *main - prints the alphabet.
 *alphabets in small letters
 *Return: Always 0 (Suceess)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
putchar('\n');
return (0);
}
