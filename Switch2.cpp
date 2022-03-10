#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int choice,a,b;
	
	printf("Enter two values:");
	scanf("%d%d",&a,&b);
	
	printf("Press 1 for total\nPress 2 for multiplication\nPress 3 for division\nPress 4 for exit\nPress a value:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Total : %d",a+b);
		break;
		
		case 2:
		    printf("Product : %d",a*b);
		break;
		
		case 3:
			printf("Division : %d",a/b);
		break;
		
		case 4:
		 	exit(0);
		break;
		
		default:
			printf("Wrong input");
		break;	
	}
	
	getch();
}
