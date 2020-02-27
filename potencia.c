#include <stdio.h>

/*
* print power of number postive or negative
*/

int main ()
{
	int a,r;
	int c;

	printf("Ingrese numero: \n");
	scanf("%d",&a);
	printf("\n");
	printf("Ingrese base\n");
	scanf("%d",&c);
	printf("\n");
	printf("La potencia de %d elevado a la %d\n", a, c);
	r = potencia(a,c);
	printf("%d\n", r);
	return (r);
}

int potencia (int a, int c)
{

int i, acum;
acum=a;

if (c==0)
{
	return(1);
}else if (/* condition */ a != 0)
{
	/* code */
	for(i = 1; i < c; i++)
		{
			acum=acum*a;
		}
		return(acum);
}
}