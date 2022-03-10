#include<stdio.h>
#include<conio.h>
void sum(int a,int b)
{
	printf("Sum is:%d",a+b);
}
void div(int a,int b)
{
	printf("\nDivision is:%d",a/b);
}

main()
{
	int x=23,y=34;
	
	sum(x,y); //call by value
	div(x,y);
	getch();
}



