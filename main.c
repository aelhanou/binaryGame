#include <stdio.h>


// function has two int as an argument and do the addition and convert them to binary and return int



int main ()
{
	int T[5],
		a,i,j;
	i=0;
	
	printf("Donner un nombre superieur a 0 : \n");
	scanf ("%d",&a);
	
	while (a!=0)
	{
		T[i]=a%2;
		a=a/2;
		i++;
	}
	for (j=i-1 ; j>=0 ; j--)
	{
		printf("%d",T[j]);
	}
}





int	main()
{
	
	int a[3] = {1,1,0};
	int b[3] = {0,1,1};
	
	
	
	
	
	
	return 0;
}
