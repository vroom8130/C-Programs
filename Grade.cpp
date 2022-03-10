#include<stdio.h>
#include<conio.h>
main()
{
	float s1,s2,s3,s4,s5,tot,avg;
	printf("Enter marks of 5 subjects:");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	tot=s1+s2+s3+s4+s5;
	avg=tot/5;
	
	if(tot>500)
	{
		printf("Total marks not should be greater than 500..");
	}
	else
	{
	printf("\nTotal Marks : %.2f",tot);
	printf("\nAverage : %.2f\n",avg);
	}
	
	if(avg<33)
	{
		printf("Grade:E");
	}
	else if(avg>=33 && avg<=50)
	{
		printf("Grade:D");
	}
	else if(avg>=50 && avg<=70)
	{
		printf("Grade:C");
	}
	else if(avg>=70 && avg<=80)
	{
		printf("Grade:B");
	}
	else if(avg>=80 && avg<=90)
	{
		printf("Grade:A");
	}
	else if(avg>=90 && avg<=100)
	{
		printf("Grade:A+");
	}
	else
	{
		printf("Wrong Input");
	}
	getch();
}
