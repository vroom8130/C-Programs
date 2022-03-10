#include<stdio.h>
#include<conio.h>
main()
{
	int space=5,star=1;
	
	for(int i=1;i<=11;i++)
	{
	     for(int j=1;j<=space;j++)
	     {
	     	printf(" ");
		 }
		 for(int k=1;k<=star;k++)
		 {
		 	printf("*");
		 }
		 printf("\n");
		 	if(i>5)
			{
			space++;
			star=star-2;	
			}
			else
			{
			space--;
			star=star+2;	
			}	   	    	
	}
	
getch();	
}
