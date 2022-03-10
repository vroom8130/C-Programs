#include<stdio.h>
#include<conio.h>
main()
{
	int day;
	printf("1 se lekr 7 ke bich mai koi bhi number daalo:");
	scanf("%d",&day);
	
	if(day==1)
	{
		printf("Monday");
	}
	else if(day==2)
	{
		printf("Tuesday");
	}
	else if(day==3)
	{
		printf("Wednesday");
	}
	else if(day==4)
	{
		printf("Thursday");
	}
	else if(day==5)
	{
		printf("Friday");
	}
	else if(day==6)
	{
		printf("Saturday");
	}
	else if(day==7)
	{
		printf("Sunday");
	}
	else
	{
		printf("Is number ke liye koi bhi din nhi hai");
	}
getch();	
}
