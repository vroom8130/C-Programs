// 1 to n even numbers
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,total=0;
	printf("Enter limit:");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
	getch();
}
