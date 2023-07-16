#include<stdio.h>

/**
  *main - prints alphabet.
  *alphabets in small letters and in capital letters
  *Return: Always 0 (success)
  */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;


	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
