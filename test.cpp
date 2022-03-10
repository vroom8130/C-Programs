#include<stdio.h>
#include<conio.h>
main()
{
	int i1,i2,i3,i4,t;
	printf("Enter price of 5 items by pressing enter with each:");
	scanf("%d%d%d%d",&i1,&i2,&i3,&i4);
	t=i1+i2+i3+i4;
	
	printf("Total is:%d",t);
	getch();
}

