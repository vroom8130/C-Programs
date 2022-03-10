#include<stdio.h>
#include<conio.h>
main()
{
	double item1,item2,item3,item4,item5,tot=0,dis=0;
	printf("Enter price of 5 items:");
	scanf("%lf%lf%lf%lf%lf",&item1,&item2,&item3,&item4,&item5);
	tot=item1+item2+item3+item4+item5; 
	if(tot>=2000) 
	{
		dis=tot*5/100;
	}
	else if(tot>=4000)
	{
		dis=tot*7/100;
	}
	else if(tot>=6000)
	{
		dis=tot*10/100;
	}
	else if(tot>=8000)
	{
		dis=tot*15/100;
	}
	else
	{
		dis=0;
	}
	
	tot=tot-dis;
	
	if(dis>0)
	{
		printf("Congratulation you got a discount amount of rupees %.0lf",dis);
	}
	else
	{
		printf("No discount for your bill....");
	}
	
	printf("\nYou have to pay a bill of %.0lf rupees",tot);
	
getch();	
}
