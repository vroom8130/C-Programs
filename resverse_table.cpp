#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(int i=10;i>=1;i--)
	{
		printf("%d\n",n*i);
	}
	getch();
}



