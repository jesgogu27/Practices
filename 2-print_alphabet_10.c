#include "holberton.h"

/**
 *print_alphabet_x10 - prints 10 alphabet.
 *
 *Return: always 0
 */

int print_alphabet_x10(void)
{
  int i, j;

  for (i = 0; i < 10; i++)
    {
      for(j = 97; j <123; j++)
	{
	  _putchar(j+'a');
	}
      _putchar('\n');
    }
return (0);
}
