#include<stdio.h>
#include<conio.h>
main()
{
	long int n,fact=1;
	printf("Enter limit of factorial:");
	scanf("%ld",&n);
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %ld is %ld",n,fact);
	getch();
}
