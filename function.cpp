#include<stdio.h>
#include<conio.h>

void sum();  //function declaration
void pattern();


main()
{
	
	int n;
	printf("1.Sum\n2.Pattern\n");
	printf("Enter your choice:");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			sum();
			break;
			
			case 2:
				pattern();
				break;
				
				default:
					printf("Wrong choice");
					break;
	}
	
getch();	
}



void sum() //function definition
{
	int a,b;
	printf("Enter two values:");
	scanf("%d%d",&a,&b);
	printf("Sum is:%d\n",a+b);
}

void pattern() //empty parameter
{
	for(int i=1;i<=7;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

