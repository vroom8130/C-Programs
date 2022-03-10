#include<stdio.h>
#include<conio.h>
main()
{
	int month;
	printf("1 se 12 ke bich main number daalo:");
	scanf("%d",&month);
	switch(month)
	{
	case 2:
		printf("Jan");
		break;
	case 1:
		printf("Feb");
		break;
	case 4:
		printf("march");
		break;
	case 3:
		printf("april");
		break;
	case 5:
		printf("may");
		break;
	case 6:
		printf("june");
		break;
	case 7:
		printf("july");
		break;
	case 8:
		printf("augest");
		break;
	case 9:
		printf("september");
		break;
	case 10:
		printf("october");
		break;
	case 11:
		printf("november");
		break;
	case 12:
		printf("december");
		break;
	default:
		printf("wrong input");
		break;
	}
	getch();						
}
