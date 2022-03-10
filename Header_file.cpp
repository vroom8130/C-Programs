#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
 int choice;
 
 printf("1.Notepad\n2.Chrome\n");
 scanf("%d",&choice);	

if(choice==1)
{
	system("start notepad");
}
else
{
	system("start chrome");
}
	
getch();
}
