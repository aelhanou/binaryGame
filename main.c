#include <stdio.h>


// function has two int as an argument and do the addition and convert them to binary and return int
int rest=0;


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

	int a[3] = {1,0,1};
	int b[3] = {1,1,0};
	int c[4] = {0,0,0,0};
    int i;

    detobin();

//    for (i = 2;i >= 0;i--)
//    {
//        c[i+1]=sTw(a[i],b[i], rest);
//
//    }
//    if(rest==1)
//    {
//        c[0]=rest;
//
//    }
//    if(rest==1)
//    {
//        printf("%d",c[0]);
//    }
//    for (i = 1 ; i <4; i++)
//    {
//        printf("%d",c[i]);
//    }




	return 0;
}

