//Taylor Shook
//Dr. Steinberg
//COP3223 Section 001
//Small Program 4

#include<stdio.h>

// Function Prototypes
void countEvenOdd();
void drawShape();
void toyPhone();
void costPreview(int years, int percent);

int main()
{
	//problem 1
	countEvenOdd();
	
	//problem 2
	drawShape();
	
	//problem 3
	toyPhone();
	
	//problem 4
	int years, percent;// variable declarations
	
	// number of years
	printf("Enter the number years to observe: ");
	scanf("%d", &years);// takes input from user
	
	// percentage
	printf("Enter the percentage rate to increase by per year: ");
	scanf("%d", &percent);// takes input from user
	
	// loop that starts if input is invalid and continues until a valid input is entered.
	while(years < 1 || percent < 1)
	{
		printf("Invalid input.\n");
		
		printf("Enter the number years to observe: ");
		scanf("%d", &years);// takes input from user
	
		printf("Enter the percentage rate to increase by per year: ");
		scanf("%d", &percent);// takes input from user
	}
	
	//function call using values for years and percent
	costPreview(years, percent);
	
	return 0;
}

// Problem 1
void countEvenOdd()
{
	//variable declarations
	int num = 1;
	double even, odd, avrge, avrgo;
	even = 0;
	odd = 0;
	// loop that continues until user enters the value 0
	while(num != 0)
	{
		printf("Enter a positive integer: ");
		scanf("%d", &num);
		
		if (num != 0)
		{
			//while loop that gets entered if value is negative, continues until positive integer is entered.
			while (num < 0)
			{
				printf("That's a negative number!\n");
				printf("Enter a positive integer: ");
				scanf("%d", &num);// takes input from user
			}
			
			if (num != 0)
			{	if (num%2 == 0)//if even
				{
					even++;// adds 1 to even variable
					avrge += num;// adds entered number to average variable
				}
			
				else//if odd 
				{
					++odd;// adds 1 to odd variable
					avrgo += num;// adds entered number to average variable
				}
			}
		}	
	}
	
	// calculates average of even or odd numbers
	avrge = (avrge / even);
	avrgo = (avrgo / odd);
	
	if(odd == 0)
	{
		avrgo = 0;
	}
	if(even == 0)
	{
		avrge = 0;
	}
		
	printf("%.0lf even numbers were entered and the average is %lf\n", even, avrge);
	printf("%.0lf odd numbers were entered and the average is %lf\n", odd, avrgo);
}

//Problem 2
void drawShape()
{
	//variable declaration
	int rows;
	
	printf("How many rows would you like the shape to have?: ");
	scanf("%d", &rows);// takes input from user
	
	//while loop that starts if input is invalid and continues until valid input is entered
	while(rows <= 0)
	{
		printf("Invalid Input. Please try again.\n");
		printf("How many rows would you like the shape to have?: ");
		scanf("%d", &rows);// takes input from user
	}
	// for loop that uses input to print a design of however many rows
	for(int x = 0; x < rows; x++)
	{
		for(int y = 0; y < rows; y++)
		{
			if(x == 0 || x == rows-1)
			{
				printf("*");
			}
			else if(x > 0 || x < rows-1)
			{
				
				if(y == 0 || y == x || y == rows-1)
				{
					printf("*");
				}
				else 
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}

//Problem 3
void toyPhone()
{
	// variable declaration and assignment
	int choice=0;
	
	printf("Welcome to the Toy Phone!\n");
	
	//while loop that continues until 6 is input by the user
	while (choice != 6)
	{
		printf("Enter a button: ");
		scanf("%d", &choice);// takes input from user
		
		//while loop that starts and continues if choice is 0 or less or more than 6
		while ( choice > 6 || choice <= 0)
		{
			printf("Invalid option.\nEnter a button: ");
			scanf("%d", &choice);// takes input from user
		}
		
		// switch that controls the choice variable and outputs corresponding strings.
		switch(choice)
		{
			case 1:
				printf("Hello!\n");
			break;
			
			case 2:
				printf("Loopy Loops!\n");
			break;
			
			case 3:
				printf("Programming is fun!\n");
			break;
			
			case 4:
				printf("Semicolons can be a pain to forget!\n");
			break;
			
			case 5:
				printf("Are you ready for pointers?\n");
			break;
			
			case 6:
				printf("Goodbye!\n");
			break;
		}
	}
}

//Problem 4
void costPreview(int years, int percent)
{
	// variable declarations and assignments
	double tuition = 20000;
	double p = (double)(percent)/100.00;
	printf("Current Tuition: $%.2lf\n", tuition);
	
	//for loop that shows the change in tuition over however many years and percentage entered.
	for(int y = 1; y <= years; y++)
	{
		tuition = tuition + (tuition * p);
		
		printf("Year %d: $%.2lf\n", y, tuition);
	}
	
}