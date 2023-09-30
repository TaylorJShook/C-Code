// Taylor Shook
// Dr. Steinberg
// COP 3223 Section 0001                                  
// Small Program 2

#include<stdio.h>
#include<math.h>

// function prototypes
double calcHypotenuse(double a, double b);
void rentalPrices();
void timeDisplay(int secs);
double mathFunction(int n);

// main function
int main()
{
	// problem 1
	double a, b, hyp;
	
	//printf prompts user to enter values through scanf
	printf("Enter the value for a: ");
	scanf("%lf", &a);
	
	printf("Enter the value for b: ");
	scanf("%lf", &b);
	
	//calls the calcHypotenuse function using values a and b
	hyp = calcHypotenuse(a,b);
	
	printf("If a = %.3lf and b = %.3lf, then that means the hypotenuse is %.3lf.\n", a, b, hyp);
	
	//problem 2
	// calls rentalPrices function
	rentalPrices();
	
	//problem 3
	int seconds;
	
	printf("Enter the seconds: ");
	scanf("%d", &seconds);
	
	// calls timeDisplay function using value seconds
	timeDisplay(seconds);
	
	//problem 4
	int n;
	double result;
	
	printf("Enter the value for n: ");
	scanf("%d", &n);
	
	// calls mathFunction function and assigns the value to a variable
	result = mathFunction(n);
	
	printf("The function computes the value %.3lf.\n", result);
	
	// end of main function
	return 0;
}


//problem 1
double calcHypotenuse(double a, double b)
{
	// variable declarations
	double insqr, c;
	
	insqr = (a*a)+(b*b);
	c = sqrt(insqr);
	
	//end of function, returns the value of c to main
	return	c;
}


// problem 2
void rentalPrices()
{
	// variable declarations
	int days;// input variable
	double tes, chev, nis;// different cars
	
	printf("Hello Luis!\n");
	printf("Thank you for considering Hertz for your car rental needs.\n");
	printf("You have asked to compare prices for three vehicles.\n");
	
	//takes input for number of days
	printf("Please enter the number of days you plan to rent the vehicle: ");
	scanf("%d", &days);
	
	//calculations for each car using number of days
	tes =  46.48 * days;
	chev = 49.53 * days;
	nis = 50.72 * days;
	
	// prints the costs of each car for the given number of days
	printf("Here are the prices excluding tax.\n");
	printf("Tesla Model 3 Standard Range: $%.2lf\n", tes);
	printf("Chevrolet Malibu: $%.2lf\n", chev);
	printf("Nissan Rogue: $%.2lf\n", nis);
	
	//function ends, returns nothing
}


// problem 3
void timeDisplay(int secs)
{
	// variable declarations
	int hrs, mins, sec;
	
	// calculations for hours, minutes and seconds.
	hrs = secs / 3600;
	mins = (secs % 3600) / 60;
	sec = secs - ((hrs * 3600) + (mins * 60));
	
	printf("%d seconds is %d hours, %d minutes, and %d seconds.\n", secs, hrs, mins, sec);
	
	// function ends, returns nothing
}


// problem 4
double mathFunction(int n)
{
	// variable declarations
	double numer, mid, denom, result;
	
	
	//calculations for each part of the equation
	numer = (pow(n,n))-(pow(2,n));
	mid = sqrt(n) * pow(n,4);
	denom = exp(n-2)+9;
	result = (numer / (mid / denom)) - (8 * n);
	
	// end of function, returns the value of result to main
	return result;
}