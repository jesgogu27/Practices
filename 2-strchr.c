#include "holberton.h"

/**
 *_strchr -  similar function: strchr
 *@s: pointer received.
 *@c: character to find.
 *Return: character or null.
 */

char *_strchr(char *s, char c)
{

int i, con,x, j;
char *p, h;

p=s;

if (s == '\0')
{
return (0);
}

i=0;

while (p[i] != '\0')
{
if(p[i]==c){ 
x=i;
}
i++;
con++;
}

printf("tamaño pointer= %d\n", con);
printf("posicion i= %d\n", x);





for(j = x-1; j <con; j++) 
{
/*printf("s[j]= %c\n",s[j]);*/
h= s[j];

}
return (h);
printf("nada \n");
printf("buscar %c\n", c);
printf("i= %d\n", i);

return (s);
}
