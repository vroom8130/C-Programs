#include<stdio.h>
#include<conio.h>
main()
{
	int n,item,total=0;
	printf("How many items:");
	scanf("%d",&n);  //n=100
	
	printf("Enter %d items values:",n);
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&item);
		total=total+item;
	}
	printf("\nTotal is:%d",total);
	getch();
}

//i=1
//item = 100;
//total = 0+100;
//total=100;
//
//i=2
//item=200
//total = 100+200;
//total=300;
//
//i=3
//item=300;
//total =300+300;
//total=600
//
//i=4
//item=100
//total=600+100
//total=700;
//
//i=5
//item=80;
//total=700+80
//total=780;
//
//i=6











