//If else If
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
 int choice;
 
 printf("1.Notepad\n2.Chrome\n3.Calculator\n4.Facebook\n5.Whatsapp\nEnter your choice:");
 scanf("%d",&choice);	

if(choice==1)
{
	system("start notepad");
}
else if(choice==2)
{
	system("start chrome");
}
else if(choice==3)
{
	system("start calc");
}
else if(choice==4)
{
	system("start www.facebook.com");
}
else if(choice==5)
{
	system("start www.web.whatsapp.com");
}
else
{
	printf("You have eneterd wrong choice.");
}

getch();
}
