// Taylor Shook
// Dr. Steinberg
// COP 3223 Section 0001                                  
// Small Program 1

#include <stdio.h>

int main()
{
	//problem 1 **
	
	// print statements
	printf("--          --\n");
	printf("--          --\n");
	printf("--          --\n");
	printf("--          --\n");
	printf("--------------\n");
	printf("--------------\n");
	printf("--          --\n");
	printf("--          --\n");
	printf("--          --\n");
	printf("--          --\n");
	
	
	//problem 2 **
	
	// defining variables
	int chk1, chk2, chk3, chk4, chk5;
	int totchk, dozens, singles;
	
	printf("Enter the amount of eggs laid for each of the 5 chickens.\n");	
	
	// take input values from user 
	printf("Chicken 1: ");
	scanf("%d", &chk1);
	
	printf("Chicken 2: ");
	scanf("%d", &chk2);
	
	printf("Chicken 3: ");
	scanf("%d", &chk3);
	
	printf("Chicken 4: ");
	scanf("%d", &chk4);
	
	printf("Chicken 5: ");
	scanf("%d", &chk5);
	
	// use input values to calculate egg totals, dozens, and singles
	totchk= chk1 + chk2 + chk3 + chk4 + chk5;
	dozens= totchk / 12;
	singles= totchk - (dozens * 12);
	
	// print final values after calculations
	printf("There are %d dozen(s) and %d egg(s) total.\n", dozens, singles);
	
	
	//problem 3 **
	
	// defining variables
	double amt, simp, tot;
	
	printf("Let's calculate simple interest for an amount based on a duration of 5 years\nwith a rate of interest equal to 12.5%%.\n");
	
	// take input values from user
	printf("Enter the amount: ");
	scanf("%lf", &amt);
	
	// use input variables to calculate 
	simp= (amt * 5 * 12.5) / 100;
	tot= simp + amt;
	
	// print final values
	printf("The interest for a principal amount of $%.2lf is $%.2lf.\n", amt, simp);
	printf("The total balance will be $%.2lf.\n", tot);
	
	
	//problem 4**
	
	// define variables
	double radius, pbase, pheight, tbase, theight, radsqr;
	double circ, para, tri, area;
	const double pi= 3.141592;
	
	printf("Let's calculate the area of the 2D car drawing.\n");
	
	// take input values from user
	//circles
	printf("Let's start with the 4 circles.\n");
	printf("Enter the radius: ");
	scanf("%lf", &radius);
	
	//parallelogram
	printf("Now lets get the info on the parallelogram.\n");
	printf("Enter the base: ");
	scanf("%lf", &pbase);
	
	printf("Enter the height: ");
	scanf("%lf", &pheight);
	
	// triangle
	printf("Last, lets enter the information on the triangle.\n");
	printf("Enter the base: ");
	scanf("%lf", &tbase);
	
	printf("Enter the height: ");
	scanf("%lf", &theight);
	
	// use input values to perform calculations
	radsqr= radius * radius;
	circ= (pi * radsqr) * 4;
	para= pbase * pheight;
	tri= (tbase * theight) / 2;
	area= circ + para + tri;
	
	printf("The area of the 2D car is %.5lf units.\n", area);
	
	return 0;
}