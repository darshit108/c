#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int air_no,choice,seat,pays;
	int status;
	int cunt = 0;
	char name[100],google_pay[100],email[100],pay[100],passport[100],n[100];
	printf("------------------------- Welcome to airline system ---------------------------\n\n");

	printf("Enter Flight Number : ");
	scanf("%d",&air_no);
	
	printf("Flight Name : Air India\n");
	printf("Flight From : Ahmedabed\n");
	printf("use Destinations : Dubai\n");
	printf("Flight Time : 10:00am To 2:00pm\n");
	printf("Amount : 11,052\n");
	printf("Flight available : Fri,15 Jan\n");
	
	printf("\n1. First Class \n");
	printf("2. Business Class \n");
	printf("3. Economy Class \n");
	
	printf("\nEnter your choice class : ");
	scanf("%d",&choice);
	
	if(choice == 1){
		printf("---------------------------- Welcome To First Class ----------------------------\n");
		printf("12 sits\n");
		printf("6 sits avalible\n");
		printf("avalible sits 7,8,9,10,11,12\n");
		
		printf("Enter your sits : ");
		scanf("%d",&seat);
		if(seat < 7 || seat > 12)
		{
			status=-1;
		}
		
	}
	
	
	else if(choice == 2){
		printf("---------------------------- Welcome To Business Class -------------------------\n");
		printf("28 sits\n");
		printf("14 sits avalible\n");
		printf("avalible sits 15,16,17,18,19,20,21,22,23,24\n");
		
		printf("Enter your sits : ");
		scanf("%d",&seat);
		if(seat < 15 || seat >25 )
		{
			status=-1;
		}
		
	}
	
	
	else if(choice == 3)
	{
	
		printf("----------------------------- Welcome To Economy Class -------------------------\n");
		printf("50 sits\n");
		printf("25 sits avalible\n");
		printf("avalible sits 26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50\n");
		
		printf("Enter your sits : ");
		scanf("%d",&seat);
		if(seat < 26 || seat >50 )
		{
			status=-1;
		}
	}
	
	if(status==-1)
	{
		printf("!sorry is ticket not booking!");
	}
	else
	{
		printf("\n-------------------------Payment methods----------------------------------------\n");
		
		printf("Bharat pe\n");
		printf("Google pay\n");
		printf("Phone pe\n");
		printf("Paytm\n");
		printf("Amazon pay\n");
		
		printf("\nenter your choice use to payment appliction : ");
		scanf("%d",&pays);
		
		if(pays == 1){
			
			printf("\n------------------------ Bharat pe methods ---------------------------------\n");
			printf("\nenter your name :");
			fflush(stdin),gets(name);
			printf("\nenter your email address : ");
			gets(email);
			printf("\nenter your passport number :\n");
			gets(passport);
			
			printf("\none parson amounrt = 11,052\n");
						
			printf("\n^^ your ticket booking sucessfuly ^^");
		}
		
		if(pays == 2){
			
			printf("\n------------------------ Google pay methods ---------------------------------\n");
			printf("\nenter your name :");
			fflush(stdin),gets(name);
			printf("\nenter your email address : ");
			gets(email);
			printf("\nenter your passport number :\n");
			gets(passport);
			
			printf("\none parson amounrt = 11,052\n");
						
			printf("\n^^ your ticket booking sucessfuly ^^");
		}
		
		if(pays == 3){
			
			printf("\n--------------------------Phone pe methods -----------------------------------\n");
			printf("\nenter your name : ");
			fflush(stdin),gets(name);
			printf("\nenter your email address :");
			gets(email);
			printf("\n enter your passport number :\n");
			gets(passport);
			
			printf("one parson amounrt = 11,052\n");
			
			printf("\n^^ your ticket booking sucessfuly ^^");
		}
		
		if(pays == 4){
			
			printf("\n---------------------------- Paytm methods -------------------------------------\n");
			printf("\nenter your name : ");
			fflush(stdin),gets(name);
			printf("\nenter your email address :");
			gets(email);
			printf("\nenter your passport number :\n");
			gets(passport);
			
			printf("one parson amount = 10,000\n");			
			printf("\n^^ your ticket booking sucessfuly ^^");
		}
		
		
		if(pays == 5){
			
			printf("\n----------------------------- Amazon Pay ----------------------------------------\n");
			printf("\nenter your name : ");
			fflush(stdin),gets(name);
			printf("\nenter your email address : ");
			gets(email);
			printf("\nenter your passport number : ");
			gets(passport);
			
			printf("one parson amounrt = 10,052");
			printf("\n^^ your ticket booking sucessfuly ^^");
		}
	
	}
	

		
	 return 0;
}
