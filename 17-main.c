#include <stdio.h>
void f(int *a);

/**
 * main - Illustrating the array type decay
 *
 * Return: Always 0.
 */
int main(void)
{
  int *p, **z;
   int t[10];

   p = t; /* This works because of the auto implicit conversion to (int *) */
   printf("t: %p\n", t);
   printf("&t[6]: %p\n", &t[6]);
   printf("p: %p\n", p);
   
   printf("Size of pointer: %lu\n", sizeof(z));
   f(t);
   return (0);
}

/**
 * f - prints the value of a pointer of type int
 * @a: address of an integer we need to print
 *
 * Return: Nothing.
 */
void f(int *a)
{
   printf("a: %p\n", a);
   return;
}
