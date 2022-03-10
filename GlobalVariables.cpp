#include<stdio.h>
#include<conio.h>

int a,b;  //global variables

void input()
{
		printf("Enter two values:");
		scanf("%d%d",&a,&b);
}

void sub()
{
	printf("Substraction is:%d",a-b);	
}

main()
{
	int x,y; //local variables
	
	input();
	sub();	
}


