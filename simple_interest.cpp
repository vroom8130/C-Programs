//Scanf
#include<stdio.h>
#include<conio.h>
main()
{
	float p,r,t,si;
	printf("Enter principle amount:");
	scanf("%f",&p);
	printf("Enter interest rate:");
	scanf("%f",&r);
	printf("Enter time:");
	scanf("%f",&t);
	si=p*r*t/100;
	printf("Simple interest is:%f\n",si);
	printf("Total:%f",si+p);
	getch();
}
