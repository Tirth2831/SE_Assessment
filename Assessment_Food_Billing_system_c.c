/*
Write a program to demonstrate a Food Billing System.
• Display the Menu using appropriate codes.
• For Menu kinds of Programming , use the core logic of 
Loops/conditional statements.
• You need to strictly follow the syntaxes’s of that logic which you are 
using.
• Write the necessary comments for better understanding to you as well 
as to the faculty.
*/
#include<stdio.h>
main()
{
	int choice,qun,amount,total_amount;
	char opt;
	
do
{
	printf("\n\t   1. Pizza     Price = 180rs/pcs");
	printf("\n\t   2. Burgur    Price = 100rs/pcs");
	printf("\n\t   3. Dosa      Price = 120rs/pcs");
	printf("\n\t   4. Idli      Price = 50rs/pcs");
	
	printf("\n\n\t Enter Your Choice 1 to 4 : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : printf("\n\t You have Select Pizza.");
				printf("\n\t Enter A Quantity : ");
				scanf("%d",&qun);
				amount=180 * qun;
				printf("\t Amount : %d ",amount);
				break;
		case 2 : printf("\n\n\t You have Select Burgur.");
				printf("\n\t Enter A Quantity : ");
				scanf("%d",&qun);
				amount=100 * qun;
				printf("\t Amount : %d ",amount);
				break;
		case 3 : printf("\n\n\t You have Select Dosa.");
				printf("\n\t Enter A Quantity : ");
				scanf("%d",&qun);
				amount=120 * qun;
				printf("\t Amount : %d ",amount);
				break;
		case 4 : printf("\n\n\t You have Select Idli.");
				printf("\n\t Enter A Quantity : ");
				scanf("%d",&qun);
				amount=50 * qun;
				printf("\t Amount : %d ",amount);
				
				break;
		default : printf("\n\n\t Please select 1 to 4 .... ");
				break;
	}
	total_amount += amount;
	printf("\n\t Total Amount : %d ",total_amount);
	printf("\n\n\t Do You want place more Order ? Y & N : ");
	scanf(" %c",&opt);
}
while(opt == 'Y' || opt == 'y');	
}