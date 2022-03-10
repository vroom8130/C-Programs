//conditional statements

#include<stdio.h>
#include<conio.h>
main()
{
	int pin1,pin2;
	printf("Enter 1st 4 digit pin:");
	scanf("%d",&pin1);
	
	printf("Enter 2nd 4 digit pin:");
	scanf("%d",&pin2);
	
	
	if(pin1==1234 || pin2==8080)
	{
		printf("Login Success");
	}
	else
	{
		printf("Login failed due to wrong password");
	}
getch();
}
