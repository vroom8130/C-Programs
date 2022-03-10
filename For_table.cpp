//Table

#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a); 
	
	for(int b=1;b<=10;b++)
	{
	printf("%d x %d = %d\n",a,b,a*b);	
	}
getch();
}


