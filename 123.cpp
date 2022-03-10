#include<stdio.h>
#include<conio.h>
main()
{
	int colour;
	printf("Enter a number between 1 to 5:");
	scanf("%d",&colour);
	if(colour==1)
	{
		printf("Red");
	}
	else if(colour==2)
	{
		printf("Blue");
	}
	else if(colour==3)
	{
		printf("White");
	}
	else if(colour==4)
	{
		printf("Black");
	}
	else if(colour==5)
	{
		printf("Pink");
	}
	else
	{
		printf("Wrong digit enetered");
	}
	getch();
}
				
