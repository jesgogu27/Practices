#include <stdio.h>

int main()
{

char *x, *f;
int i;

x= "hello";


for( i=0; i < 5; i++)
{
f=&x[i];
}

printf("puntero f %s\n", f);

return(i);
}
