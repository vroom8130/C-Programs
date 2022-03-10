// 1 to 100
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,total=0;
	printf("Enter limit:");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		total=total+i;
	}
	printf("Total is:%d",total);
	getch();
}
