//conditional statements

#include<stdio.h>
#include<conio.h>
main()
{
	int pin;
	printf("Enter 4 digit pin:");
	scanf("%d",&pin);
	
	if(pin==1234)
	{
		printf("Login Success");
	}
	else
	{
		printf("Login failed due to wrong password");
	}
getch();
}
