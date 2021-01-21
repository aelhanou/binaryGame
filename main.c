#include <stdio.h>
#include<math.h>

int T[3];

// function has two int as an argument and do the addition and convert them to binary and return int
int rest=0;
void    functionBin(){
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
	 printf("\nle decimale nombre equivalent est : %d\n", a);
	 printf("\n\n");
}

int  sTw(int a,int b, int k)
{
    int r=0;
    rest=0;
    if(a+b+k==1)
    {
        r=1;
    }

    if(a+b+k==2)
        {
           rest=1;
           r=0;
        }else if(a+b+k==3)
        {
           rest=1;
           r=1;
        }


    return r;

}
void detobin()
{
	int	a,i,j,k;
	i=0;

	printf("Donner un nombre superieur a 0 : \n");
	scanf ("%d",&a);
    k = a;
	while (a!=0)
	{
		T[i]=a%2;
		a=a/2;
		i++;
	}
	printf("the binary of %d is :",k);
	for (j=i-1 ; j>=0 ; j--)
	{
		printf("%d",T[j]);
	}
    printf("\n\n");
}

int main ()
{


	int a[3] = {1,0,1};
	int c[4] = {0,0,0,0};
    int i;

    detobin();
    functionBin();
    for (i = 2;i >= 0;i--)
    {
        c[i+1]=sTw(a[i],T[i], rest);

    }
    if(rest==1)
    {
        c[0]=rest;

    }
    printf("the sum of two binary is : ");
    if(rest==1)
    {
        printf("%d",c[0]);
    }
    for (i = 1 ; i <4; i++)
    {
        printf("%d",c[i]);
    }
    printf("\n\n");



	return 0;
}



