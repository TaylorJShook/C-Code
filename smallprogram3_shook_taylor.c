// Taylor Shook
// Dr. Steinberg
// COP 3223 Section 0001                                  
// Small Program 3

#include<stdio.h>

// function prototypes
int creditCheck(double price);
void universityAdmission(double GPA, int score);
void keyPad();
double carpenter();

//main function
int main()
{
	//problem 1
	double price;// declare price variable
	
	printf("Enter the price: ");
	scanf("%lf", &price);//get user input for price
	
	int purchase = creditCheck(price);// call function
	
	// if statement determines what is output
	if (purchase && purchase != 2)
	{
		printf("Approved!\n");
	}
	else if (purchase == 2)
	{
		printf("Error!\n");
	}
	else
	{
		printf("Not Approved!\n");
	}
	
	// problem 2
	double GPA;
	int score;// declare GPA and score variables
	
	printf("Welcome to the University Admission System!\n");
	printf("Enter the GPA: ");
	scanf("%lf", &GPA);
	printf("Enter the test score: ");
	scanf("%d", &score);// user input for variables
	
	universityAdmission(GPA, score);// call function
	
	//problem 3
	keyPad();// call function
	
	// problem 4
	double cost;// declare cost variable
	cost = carpenter(); // call function and assign value
	
	// if statement determines what is output
	if (cost < 0)
	{
		printf("Could not compute cost...\n");
	}
	else
	{
		printf("Bruce will charge $%.2lf.\n", cost);
	}
	
	//end main
	return 0;
}

// problem 1
int creditCheck(double price)
{
	// if statement checks if the price exceeds the limit
	if (price > 9000)
	{
		return 0;
	}
	else if (price < 0)
	{
		return 2;
	}
	else
	{
		return 1;
	}
}

// problem 2
void universityAdmission(double GPA, int score)
{
	//if statement determines what is output
	if (GPA > 4.0 || GPA < 0.0 || score < 0)// if invalid input
	{
		printf("Invalid Input!\n");
	}
	else if(GPA >= 3.00 && score >= 60)// if approved
	{
		printf("Admissions is Approved!\n");
		
		if(GPA >= 3.50 && score >= 70)// if scholarship
		{
			printf("Consider for Scholarship Award!\n");
		}
	}
	else// if denied
	{
		printf("Admissions is Denied!\n");
	}
}

//problem 3
void keyPad()
{
	int option;//declare variable
	printf("Welcome to the Crazy Keypad!\n");
	
	printf("Select one of the following options for a message.\n");
	printf("Option 1\n");
	printf("Option 2\n");
	printf("Option 3\n");
	printf("Option 4\n");
	printf("Option 5\n");
	
	printf("Option Selected: ");
	scanf("%d", &option);//user input
	
	//switch determines what to print
	switch(option)
	{
		case 1: // option == 1
			printf("Opening Vault 712...\n");
			break;
			
		case 2: // option == 2
			printf("Opening Secret Elevator...\n");
			break;
			
		case 3: // option == 3
			printf("Calling the Boss...\n");
			break;
			
		case 4: // option == 4
			printf("Backup on the way...\n");
			break;
			
		case 5: // option == 5
			printf("Alarm activated...\n");
			break;		
		default: // else
			printf("System Locked...\n");
	}
}

// problem 4
double carpenter()
{
	//variables are declared and assigned values
	char oak = 'n';
	char gold = 'n';
	int num = 0;
	double charge = 30;
	
	printf("Welcome to Bruce's Carpentry Services!\n");
	
	printf("Would you like the sign made out of oak?\n");
	printf("Enter y for yes or n for no: ");
	scanf(" %c", &oak);// user input
	//if statement checks that user input is valid
	if(oak != 'y' && oak != 'Y' && oak != 'n' && oak != 'N')
	{
		return -1;
	}
	
	printf("Enter the number of characters on the sign: ");
	scanf("%d", &num);// user input
	//if statement checks that user input is valid
	if (num < 0)
	{
		return -1;
	}
	
	printf("Would you like gold-leaf lettering?\n");
	printf("Enter y for yes or n for no: ");
	scanf(" %c", &gold);// user input
	//if statement checks that user input is valid
	if(gold != 'y' && gold != 'Y' && gold != 'n' && gold != 'N')
	{
		return -1;
	}
	
	// if statements determine final cost
	if (oak == 'y' || oak == 'Y')// if oak
	{
		charge += 15;
	}
	
	if (gold == 'y' || gold == 'Y')// if gold-leaf
	{
		charge += 12;
	}
	
	if (num > 5)// if more than 5 characters
	{
		charge += ((num-5)*2);
	}
	
	//charge value is returned to main
	return charge;
	
}