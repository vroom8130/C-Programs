//Loop 2
#include<stdio.h>
#include<conio.h>
main()
{
	int s,e;
	printf("Enter starting and ending point of loop:");
	scanf("%d%d",&s,&e);
	
	for(int step=s;step<=e;step++)
	{
		printf("%d\n",step);
	}
    
	getch();	
}
