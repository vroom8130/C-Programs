#include<stdio.h>
#include<conio.h>
main()
{
	int star=1,space=6;
	
	for(int i=1;i<=6;i++) //row
	{
		for(int j=1;j<=space;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=star;k++)
		{
			printf("*");
		}
		printf("\n");
		space--; //5
		star=star+2;	 //2
	}
	
	
	
	
	
	getch();
}
