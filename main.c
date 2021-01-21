#include <stdio.h>
#include<math.h>





int main ()
{
	int b,a,weight,rem;
	
	printf("Entrer un nombre binaire : \n");
	scanf ("%d",&b);
	
     a = 0,weight = 1;
    while ( b != 0)
	{
		rem = b % 10;
		a = a + rem*weight;
		b = b / 10;
		weight = weight*2;
	 } 
	 printf("le decimale nombre equivalent est : %d", a);
}
